#include <iostream>
using namespace std;

int main() {
    int numEmployees;

    cout << "Enter number of employees: ";
    cin >> numEmployees;

    double hours[numEmployees];
    double rate[numEmployees];
    double total[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        
        cout << "Hours worked: ";
        cin >> hours[i];

        cout << "Hourly rate: ";
        cin >> rate[i];

        total[i] = hours[i] * rate[i];
    }

    cout << "\n--- Payroll Summary ---\n";
    for (int i = 0; i < numEmployees; i++) {
        cout << "Employee " << i + 1 
             << " | Total Pay: $" << total[i] << endl;
    }

    return 0;
}
