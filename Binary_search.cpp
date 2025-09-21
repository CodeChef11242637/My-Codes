#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1,3,5,3,6,7,8,12,15,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    int beg = 0,end = n,mid = 0,item;

    // Sorted array
    for(int i = 1; i<n; i++)
    {
        for(int j = i + 1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i] <<" ";
    }

    mid = (beg + end)/2;

    cout<<"\nEnter your number to find the array: ";
    cin>>item;
    while(n>0)
    {
        mid = (beg + end)/2;

        if(arr[mid] == item)
        {
            cout<<"\nYour number is found at index: "<<mid<<endl;
            break;
        }
        else if(arr[mid] < item)
        {
            beg = mid + 1;
        }
        else {
            end = mid-1;
        }
        n = n - 1;
    }
    if(n == 0)
    {
        cout<<"Your number is not present in the array.";
    }

    return 0;
}