#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int m,n;
    int num1[]  = {1,2,3};
    int num2[] = {5,7,8};
    m = sizeof(num1)/sizeof(num1[0]);
    n = sizeof(num2)/sizeof(num2[0]);

    num1[m+n];

    for(int i = 0; i<n; i++)
    {
        num1[i+m] = num2[i];
    }
    sort(num1, num1+(m+n));

    for(int i = 0; i<m+n; i++)
    {
        cout<<num1[i]<<" "<<endl;
    }

    
}