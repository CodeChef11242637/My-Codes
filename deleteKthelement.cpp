#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cout<<"Enter number of element: ";
    cin>>n;
    int h = n;


    vector<int> A(n);

    cout<<"Enter element: "<<endl;
    for(int i = 0; i<n; i++) cin>>A[i];

    cout<<"Enter position of delection: ";
    cin>>k;

    if(k < 1 || k > n) {
        cout<<"Invalid index.";
        return 0;
    }

    for(int i = k - 1; i<n-1; i++)
    {
        A[i] = A[i + 1];
        n--;
    }
    cout<<"Array after delection : "<<endl;
    for(int i = 0; i<h; i++) cout<<A[i] << " ";
    return 0;


}