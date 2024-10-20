#include <iostream>
#include <iomanip>
using namespace std;
void weight(int);


main() {
    int cargo;
    cout << "Enter the count of cargo for transportation: ";
    cin >> cargo;

    weight(cargo);
    
}


void weight(int cargo){
    double total = 0;
    double minibus_weight = 0;
    double truck_weight = 0;
    double train_weight = 0;

    for (int i = 0; i < cargo; i++) {
        int weight;
        cout << "Enter the tonnage of cargo " << i + 1 << ": ";
        cin >> weight;
        total += weight;
        if (weight <= 3) {
            minibus_weight += weight;
        } else if (weight <= 11) {
            truck_weight += weight;
        } else {
            train_weight += weight;
        }
    }

    double average= (minibus_weight * 200 + truck_weight * 175 + train_weight * 120) / total;
    double minibus = (minibus_weight / total) * 100;
    double truck = (truck_weight / total) * 100;
    double train = (train_weight / total) * 100;

    cout << fixed << setprecision(2);
    cout << average << endl;
    cout << minibus << "%" << endl;
    cout << truck << "%" << endl;
    cout << train << "%" << endl;

}