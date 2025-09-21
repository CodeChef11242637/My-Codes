#include<iostream>
using namespace std;

    void selection_sort(int array[],int n)
    {
        for(int i = 0; i<n-1; i++)
        {
            int small_index = i;
            for(int j = i+1; j<n; j++)
            {
                if(array[j] < array[small_index])
                {
                    small_index = j;
                }
            }
           swap(array[i], array[small_index]);
        }
    }

    void insertion_sort(int array[], int n)
    {
        for(int i = 1; i<n; i++)
        {
            int curr = array[i];
            int prs = i - 1;
            while( prs>=0 && array[prs] > curr)
            {
                array[prs + 1] = array[prs];
                prs--;
            }
            array[prs+1] = curr;
            }
    }
    void print_sort(int array[],int n)
    {
        for(int i = 0; i<n; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }


int main(){
    int array[] = {1,3,5,2,5,6,8,7};
    int n = sizeof(array)/sizeof(array[0]);
    insertion_sort(array,n);
    print_sort(array,n);
}