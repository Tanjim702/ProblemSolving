#include <iostream>
#include <string>
using namespace std;


int main() {

  int t,n;
  cin >> t;
  for(int i=1;i<=t;i++){
    // int quotient;
    cin >> n;
    int sum = 0;
    while(n>= 1){
      sum = sum + n%10;
      n = n/10;
    }
    cout << sum << endl;


  }

  return 0;
}
