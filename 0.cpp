#include <iostream> //unsigned int -> binary
using namespace std;

int main(){

	unsigned int x;
	int a[35];
	cin>>x;
	for (int i=32; i>=0; i--){
		unsigned int y = x;
		x>>=1;
		x<<=1;
		if (x==y)
			a[i]=0;
		else
			a[i]=1;
		x>>=1;

	}
	for (int i=0; i<=32;){
	    if (a[i]==0){
	        i = i+1;
	    }
	    else{
	        for(int j = i; j<=32; j++){
	            cout<<a[j];
	        }
	        break;
	    }
	    
	}
	

	return 0;
}
//Вывести на экран unsigned int в двоичной системе счисления (то есть так, как этот unsigned int хранится в памяти компьютера), используя побитовые операции.
//Выбрала второй вариант: Если при сдвиге на 1 бит туда-сюда (влево-вправо) число не изменилось -> в рассматриваемом бите был 0, иначе 1.