#include<iostream>
using namespace std;
int main(){
    int n = 5,sum = 0,req_sum = 0,result;
    int a[n] = {1,2,3,5};

    for(int i = 0; i<n-1; i++)
    {
        sum = (n * (n + 1))/2;
        req_sum += a[i];
    }
    result = sum - req_sum;

    cout<<endl;
    cout<<"Missing element is :"<<result<<endl;
    

}