#include <iostream>
#include <cstdio>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout << "\n";
    cout << "The factorial of 5 is " << factorial(5);
    int x=56,y=98;
    cout<<"GCD of two integers"<<X<<" and "<<y<<"is"<<gcd(x,y);
    cout<<"GCD of two integers by recursive function"<<X<<" and "<<y<<"is"<<add_rec_function(x,y);
    return 0;
}
