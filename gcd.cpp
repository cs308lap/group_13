#include "functions.h"
int gcd(int x,int y){
    if(x==0){return y;}
    else if(y==0){return x;}
    while(x!=y){
        if(x>y){x=x-y;}
        else{y=y-x;}
    }
}
int add_rec_function(int a,int b){
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return b;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
