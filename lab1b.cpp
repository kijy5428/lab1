#include<iostream>

using namespace std;

int main(){

	int n;
	
	cout << "Please Enter Your Number Here : "  ;
	cin  >> n;
	cout << n;

	while(n!=1){
		
		if (n%2==1)
			n = 3*n +1;

		else 
			n = n/2;


		cout << " " << n;


	}


	return 0;

}
