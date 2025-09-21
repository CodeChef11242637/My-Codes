#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,w,find,k = 0;
    int* ba;
    w = sizeof(int);
    cout<<"Enter value of m and n: ";
    cin>>m>>n;
    int array[m][n];
    cout<<"Enter your elements: ";
    for(i = 0; i<m; i++)
    {
        for(j = 0; j<n; j++)
        {
            cin>>array[i][j];
        }
    }
    ba = &array[0][0];
    cout<<"Your matrix is : "<<endl;
    for(i = 0; i<m; i++)
    {
        for(j = 0; j<n; j++)
        {
            cout<<" "<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter your element to find the location: ";
    cin>>find;

    for(i = 0; i<m; i++)
    {
        for(j = 0; j<n; j++)
        {
            if(array[i][j] == find)
            {
                ba = ba + ((i * n) + j);
                cout<<ba<<endl;
                cout<<"Index of the value is:["<<i<<"]"<<"["<<j<<"]";
                k = 1;
                break;
            }
        }
    }
    if(k == 0)
    {
        cout<<"This element is not present in the matrix.";
    }

    return 0;
}