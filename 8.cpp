#include <iostream>
using namespace std;

void treat(int,int,int,int);

main() {
    int p;
    
    cout << "Enter Number of days you visited Hospital: ";
    cin >> p;

    int doctors = 7;
    int treated = 0;
    int untreated = 0;

    treat(p,doctors,treated,untreated);

}


void treat(int p,int doctors,int treated,int untreated){
for (int day = 1; day <= p; day++) {
        int patientsForTheDay;
        cout << "Number of patients who visited hospital on Day " << day << ": ";
        cin >> patientsForTheDay;

        if (day % 3 == 0 && untreated > treated) {
            doctors++;
        }

        if (patientsForTheDay <= doctors) {
          
            treated = treated + patientsForTheDay;
        } else {
            
            treated = treated + doctors;
            untreated =untreated + patientsForTheDay - doctors;
        }
    }
    cout << "Treated Patients: " << treated << endl;
    cout << "Untreated Patients: " << untreated << endl;

}

