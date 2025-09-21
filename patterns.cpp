#include<iostream>
using namespace std;
void pattern1(){
    int n = 6; 
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern2(){
    int n = 6; 
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern3(){
    int n = 6; 
    for(int i = 1; i<=n; i++){
        for(int j = i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void Floydsp(){
    int n = 7;
    int num = 1; 
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<num<<" ";
            num++;

        }
        cout<<endl;
    }
}
void pattern4(){
    int n = 6; 
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i-1; j++){
            cout<<" ";
        }
        for(int k = 1; k<=n-i; k++){
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern5(){
    int n = 6; 
    for(int i = 0; i<=n; i++){
        for(int j = 1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k = 1; k<=i+1; k++){
            cout<<k;
        }
        for(int l = i; l>=1; l--){
            cout<<l;
        }
        cout<<endl;

    }
}
void HollowDiaPattern(){
    int n = 6; 
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k = 1; k<=i; k++){
           if(k ==i || k==1){
            cout<<"* ";
           }
           else{
            cout<<"  ";
           }
        }
        cout<<endl;
    }
     for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<" ";
        }
        for(int k = 1; k<=n-i; k++){
            if(k ==n-i || k==1){
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
    pattern1();
}