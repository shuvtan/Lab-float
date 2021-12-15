#include <iostream> //переполнение мантиссы
#include <cmath>
using namespace std;

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
	        i = i+1;
	    }
	    else{
	        for(int j = i; j<=32; j++){
	            cout<<a[j];
	        }
	        break;
	        cout<< ' '<<endl;
	    }
	}
	
}

int main(){
	for (int i=1; ; ){
		float r = pow (10, i);
		cout<<r<<endl;
		cout << fixed;
        cout.precision(2);
		
		unint2bin(r);
        i++;
	}

	





	return 0;
}