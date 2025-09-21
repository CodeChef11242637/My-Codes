#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,8,4,5,6,7,9,10};
    int m1 = INT8_MAX;
    int m2 = INT8_MAX;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i<n; i++)
    {
        if(a[i]<m1)
        {
            m2 = m1;
            m1 = a[i];
        }
        else if(a[i] < m2 && a[i] != m1) m2 = a[i];
    }
    cout<<"First smallest: "<<m1<<endl<<"Second smallest: "<<m2<<endl;
    return 0;
}