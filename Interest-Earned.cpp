#include <iostream>
#include <cmath>  // For pow() function
using namespace std;

int main() {
    // Variables to hold user input
    double principal, interest_rate, balance;
    int times_compounded;

    // Get the initial investment (principal)
    cout << "Enter the initial principal: $";
    cin >> principal;

    // Get the annual interest rate as a percentage
    cout << "Enter the annual interest rate (as %): ";
    cin >> interest_rate;

    // Get the number of times the interest is compounded per year
    cout << "Enter the number of times interest is compounded annually: ";
    cin >> times_compounded;

    // Convert interest rate from percentage to decimal
    double rate_decimal = interest_rate / 100.0;

    // Calculate the balance after one year
    balance = principal * pow(1 + (rate_decimal / times_compounded), times_compounded);

    // Display the report
    cout << "\nInterest Report:\n";
    cout << "----------------------------------\n";
    cout << "Initial Investment: $" << principal << endl;
    cout << "Annual Interest Rate: " << interest_rate << "%" << endl;
    cout << "Times Compounded: " << times_compounded << endl;
    cout << "Balance after one year: $" << balance << endl;

    return 0;
}
