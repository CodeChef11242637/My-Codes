#include<iostream>
using namespace std;
int main()
{
    int n,key,found = 0;
    cout<<"Enter your size of array:";
    cin>>n;
    int array[n];
    cout<<"Enter "<<n<<" Elements: ";
    for(int i = 0; i<n; i++)
    {
        cin>>array[i];
    };
    cout<<"Your array is :"<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
    
    cout<<"\nEnter your element to find: ";
    cin>>key;
    for(int i = 0; i<n; i++)
    {
        if(array[i] == key)
        {
            cout<<"Your element is found at index "<<i<<endl;
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        cout<<"Your element is not found.";
    }
    
    // for reversing the array
    for(int i = 0; i<n/2; i++)
    {
            // //using third variable
            // int temp = array[i];
            // array[i] = array[n-i-1];
            // array[n-i-1] = temp;

            // //using arithmetic cal
            // array[i] += array[n-i-1];
            // array[n-i-1] = array[i] - array[n-i-1];
            // array[i] = array[i] - array[n-i-1];

            //using bit manipulation
            array[i] = array[i]^array[n-i-1];
            array[n-i-1] = array[i]^array[n-i-1];
            array[i] = array[i]^array[n-i-1];
    }
    cout<<"\nReversed array: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<array[i]<<" ";

    }
    
}