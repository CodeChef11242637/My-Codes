#include<iostream>
using namespace std;

int decToBinary(int num){
    int ans = 0, pow = 1;

    while(num > 0)
    {
        int rem = num % 2;
        num /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    cout<<"Binary: "<<decToBinary(n)<<endl;
    return 0;
}