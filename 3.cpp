#include<iostream>
using namespace std;

void upper(int);
void lower(int);

main(){
int n;
cout<<"Enter the number of :";
cin>>n;
upper(n);
lower(n);
}

void upper(int n){
     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " "; 
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; 
    }
}

void lower(int n){
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
      
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

}