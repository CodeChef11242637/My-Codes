#include<iostream>
using namespace std;

    //Booble sort
    void booble_sort(int array[],int n)
    {
        
        for(int i = 0; i<n-1; i++)
        {
            bool isSwap = false;
            for(int j = 0; j<n-i-1; j++)
            {
                if(array[j]>array[j+1])
                {
                    swap(array[j],array[j+1]);
                    isSwap = true;
                }
            }
            if(!isSwap)
            {
                return;
            }
        }
    }
    void print_array(int array[],int n)
    {
        for(int i = 0; i<n; i++)
        {
            cout<<array[i]<<" ";
        }

    }
int main()
{
        int array[] = {1,2,3,4,5};
        int n = sizeof(array)/sizeof(array[0]);
        booble_sort(array,n);
        print_array(array,n);
}