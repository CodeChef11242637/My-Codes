#include<iostream>
using namespace std;

    void pattern_1(int n)
    {
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<i+1; j++)
            {
                cout<<i+1;
            }
            cout<<endl;
        }
    }

    void pattern_2(int n)
    {
        char key = 'A';
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<i+1; j++)
            {
                cout<<char(key+i)<<" ";
            }
            cout<<endl;
        }
    }

    void pattern_3(int n)
    {
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=i; j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

    void pattern_4(int n)
    {
        for(int i = 0; i<n; i++)
        {
            for(int j =i+1; j>0; j--)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

    void pattern_5(int n)
    {
        int key = 1;
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=i; j++)
            {
                cout<<key<<" ";
                key++;
            }
            cout<<endl;
        }
    }

    void pattern_6(int n)
    {
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<i; j++)
            {
                cout<<" ";
            }
            for(int k = 1; k<=n-i; k++)
            {
                cout<<i+1;
            }
            cout<<endl;
        }
    }

    void pattern_7(int n)
    {
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n-i-1; j++)
            {
                cout<<"  ";
            }
            for(int k = 0; k<=i; k++)
            {
                cout<<k+1<<" ";
            }
            for(int l = i; l>0; l--)
            {
                cout<<l<<" ";
            }
            cout<<endl;
        }
    }

    void pattern_8(int n)
    {
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n-i-1; j++)
            {
                cout<<" ";
            }
            for(int k = 0; k<=i; k++)
            {
                if(k == 0 ||  k == i)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<i; j++)
            {
                cout<<" ";
            }
            for(int k = 0; k<=; k++)
            {
                if(k == 0 ||  k == i)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    pattern_8(n);
}