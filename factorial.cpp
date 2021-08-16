#include "functions.h"
const int MX = 100;
vector<int> v(100);
v[1] = 1;

int factorial(int n){
  if(n < 0){
    cout << "PLease enter positive number: ";
    cin >> n;
  }
  if(v[n]){
    return v[n];
  }
    if(n!=1){
      v[n] = n * factorial(n - 1);
      return v[n];
    }
    else return 1;
}
