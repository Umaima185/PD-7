#include<iostream>
using namespace std;

void amp(int);

main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    amp(n);
}

void amp(int n){
    for(int i=1;i<=n;i++){
        if(i%4!=0){
            cout<<i<<" ";
        }
        else
            cout<<i*10<<" ";
    }
}