#include<iostream>
using namespace std;
int main(){
    long double n,fac;
    cout<<"Enter Number:";
    cin>>n;
    fac = 1;
    for(int i = n; i>=1; i--){
        fac = fac * i;
    }
    cout<<"Factorial = "<<fac;
}