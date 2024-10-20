#include <iostream>
using namespace std;

bool isPrime(int);
long primorial(int);

main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << primorial(n) << endl;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


long primorial(int n) {
    int count = 0;  
    int current = 2; 
    long result = 1; 

    while (count < n) {
        if (isPrime(current)) {
            result *= current;
            count++;
        }
        current++;
    }

    return result;
}
