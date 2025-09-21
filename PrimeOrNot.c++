#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    bool isPrime = true;
    for(int i = 2; i<=n-1; i++){
        if(n%i == 0){
        isPrime = false;
        break;
    
        }
    }
       
    if(isPrime == true){
            cout<<"prime\n";
        }
        else{
            cout<<"not Prime\n";
        }
    return 0;
}