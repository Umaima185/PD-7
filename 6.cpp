#include<iostream>
using namespace std;

bool isPrime(int);

main(){
    int n;
    bool prime;
    cout<<"Enter a number:";
    cin>>n;
   prime =  isPrime(n);
   cout<<prime;
}

bool isPrime(int n){
    if (n<=1) {
        return false; 
    }
    for (int i = 2; i*i<=n; i++) {
        if (n%i == 0) {
            return false; 
        }
    }
    return true; 
}
