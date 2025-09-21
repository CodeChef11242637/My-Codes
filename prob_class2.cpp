#include<iostream>
using namespace std;
int main(){
    int a1[] = {1,2,3,5};
    int a2[] = {1,2,3,4,5};

    bool result;
    int key;
    for(int i = 0; i<4; i++)
    {
        if(a1[i] == a2[i])
        {
            result = true;
            
        }
        else
        {
            result = false;
            key = i;
            break;
        }
    }
    
    a1[key] = a2[key];
    for(int i = 0; i<4; i++)
    {
        cout<<a1[i]<<endl;
    }
    return 0;
}