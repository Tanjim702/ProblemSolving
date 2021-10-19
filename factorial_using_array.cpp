#include <iostream>
using namespace std;

int main(){
	int t; cin >> t;
	for(int k= 0;k < t ; k++){

		//for each test case
		int n;cin >> n;
		int arr[200];
		arr[0] = 1;
		int q = 1;
		for(int j = 2; j <= n; j++){
		int temp = 0;	
		//Heart of the solution
		for(int i=0;i < q ; i++){
			int product = arr[i] * j + temp;
			// cout << product << " remainder " << product % 10 << " carry " << product / 10 << endl;
			arr[i] = product % 10;
			temp = product / 10;
		}
		//Multiplication shesh e ja baki thake tar hishab
		while(temp > 0 ){
			arr[q] = temp % 10;
			temp = temp / 10;
			q = q + 1;
		}				
	}

		//Display; no need to touch this
		for(int i=q;i>0;i--){
			cout << arr[i-1];
		}
		cout << endl;
  }
	// int number = 3;
}
