#include <iostream>
using namespace std;


int main() {

  int t , n ;
  cin >> t;
  for (int i = 1; i <= t; ++i)
  {
    cin >> n;

    int lastDigit = n % 10;
    int firstDigit;
    while(n >= 1){
      if(n%10 >= 1 && n%10 < 10){
        firstDigit = n%10;
      }

      n = n / 10;
    }

    cout << firstDigit + lastDigit << endl;
  }

  return 0;
}
