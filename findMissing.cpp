#include<iostream>
using namespace std;
int main(){
    int a[10] = {1,2,8,4,5,6,7,9,10};
    int x = 0,y = 0;
    for(int i = 1; i<=10; i++) x ^= i;
    for(int i = 0; i<10; i++) y ^= a[i];
    cout<<(x^y);

    return 0;
}