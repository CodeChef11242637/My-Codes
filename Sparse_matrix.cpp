#include<iostream>
using namespace std;
int main()
{
    int count = 0;
    int matrix[3][3] = {{0,0,8},{1,0,4},{0,0,0}};
    cout<<"Simple given matirx."<<endl;

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int sparse_matrix[4][3];

    sparse_matrix[0][0] = 3;
    sparse_matrix[0][1] = 3;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(matrix[i][j] != 0)
            {
                count = count + 1;
                sparse_matrix[count][0] = i;
                sparse_matrix[count][1] = j;
                sparse_matrix[count][2] = matrix[i][j];
            }
        }
    }
    sparse_matrix[0][2] = count;

    cout<<"\nSparse Matrix."<<endl;
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<<sparse_matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}