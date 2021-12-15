#include <iostream> //float -> binary
using namespace std;

union fu {
 float f;
 unsigned int u;
};

void unint2bin(unsigned int x){

	int a[35];
	for (int i=31; i>=0; i--){
		unsigned int y = x;
		x>>=1;
		x<<=1;
		if (x==y)
			a[i]=0;
		else
			a[i]=1;
		x>>=1;

	}
	for (int i=0; i<32;){
	     if (a[i]==0){
	        for(int j = i; j<32; j++){
	            cout<<a[j];
	        }
	        break;
	    }
	    else{
	        for(int j = i; j<32; j++){
	            cout<<a[j];
	        }
	        break;
	    }
	}
	
}

int main(){
	fu a;
	cin>> a.f;
	unint2bin(a.u);

	return 0;
}#include <iostream> //float -> binary
using namespace std;

union fu {
 float f;
 unsigned int u;
};

void unint2bin(unsigned int x){

	int a[35];
	for (int i=31; i>=0; i--){
		unsigned int y = x;
		x>>=1;
		x<<=1;
		if (x==y)
			a[i]=0;
		else
			a[i]=1;
		x>>=1;

	}
	for (int i=0; i<32;){
	     if (a[i]==0){
	        for(int j = i; j<32; j++){
	            cout<<a[j];
	        }
	        break;
	    }
	    else{
	        for(int j = i; j<32; j++){
	            cout<<a[j];
	        }
	        break;
	    }
	}
	
}

int main(){
	fu a;
	cin>> a.f;
	unint2bin(a.u);

	return 0;
}
//С помощью union и функции из предыдущего пункта вывести на экран представление float в памяти
//компьютера. Проверить, что IEEE 754-2008 (стандартный стандарт) действительно работает.