#include<iostream>
using namespace std;
int main(){
    int x,y,z,i,j,k,find,m = 0;
    int* ba;
    // w = sizeof(int);
    cout<<"Enter value of x, y and z: ";
    cin>>x>>y>>z;
    int array[x][y][z];
    cout<<"Enter your elements: ";
    for(i = 0; i<x; i++)
    {
        for(j = 0; j<y; j++)
        {
            for(k = 0; k<z; k++)
            {
                cin>>array[i][j][k];
            }
        }
    }
    ba = &array[0][0][0];
    cout<<"Your matrix is : "<<endl;
    for(i = 0; i<x; i++)
    {
        for(j = 0; j<y; j++)
        {
            for(k = 0; k<z; k++)
            {
                cout<<array[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }  

    cout<<"Enter your element to find the location and address: ";
    cin>>find;

    for(i = 0; i<x; i++)
    {
        for(j = 0; j<y; j++)
        {
            for(k = 0; k<z; k++)
            {
                if(array[i][j][k] == find)
            {
                ba = ba + ((y * z * i) +(j * z) + k);
                cout<<ba<<endl;
                cout<<"Index of the value is:["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]";
                m = 1;
                break;
            }
            }
        }
    }
    if(m == 0)
    {
        cout<<"This element is not present in the matrix.";
    }

    return 0;
}