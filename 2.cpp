#include<iostream>
using namespace std;

void pattern(int);

main(){
int n;
cout<<"Enter the number of rows:";
cin>>n;
pattern(n);
}

void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
