#include <iostream> //различие int и unsigned long long int
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
	        for(int j = i; j<32; j++){
	            cout<<a[j];
	        }
	        break;
	    }
	}
	
}

int main(){
	unsigned long long int res_short = 0;
	int i_short =1;
	unsigned long long res_long = 0;
	unsigned long long i_long =1;
	while (true){
		i_short *= 2;
		i_long *=2;
		res_short += 16 * i_short;
		res_long += 16 * i_long;

		cout<<res_short<< "\t\t\t" << res_long << "\t\t\t";
		unint2bin(res_short);
		cout<< "\t\t\t";
		unint2bin(res_long);
		
		cin.get();

	}




	return 0;
}