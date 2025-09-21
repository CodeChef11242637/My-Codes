#include<iostream>
using namespace std;
int main(){

    int height[] = {4,2,0,3,2,5};
    int n = sizeof(height)/sizeof(height[0]);
    int left_array[n];
    int right_array[n];
    int last_array[n];
    int sum = 0;

    // Left array
    left_array[0] = height[0];
    for(int i = 0; i<n-1; i++)
    {
        if(left_array[i] < height[i + 1])
        {
            left_array[i + 1] = height[i + 1];
        }
        else{
            left_array[i + 1] = left_array[i];
        }
    }

    // Right array
    right_array[n-1] = height[n-1];
    for(int i = n-1; i>=0; i--)
    {
        if(right_array[i] < height[i - 1])
        {
            right_array[i - 1] = height[i - 1];
        }
        else {
            right_array[i - 1] = right_array[i];
        }
    }

    // last array
    for(int i = 0; i<n; i++)
    {
        if(left_array[i] >right_array[i])
        {
            last_array[i] = right_array[i] - height[i];
        }
        else {
            last_array[i] = left_array[i] - height[i];
        }
        sum = sum + last_array[i];
    }
    cout<<"\nThe no of blocks are Traped: "<<sum<<endl;

}