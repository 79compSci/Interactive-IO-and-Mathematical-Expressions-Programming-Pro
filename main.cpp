#include <iostream>
using namespace std;

int main() {
    // Ingredients for 48 cookies
    const double sugar_per_48 = 1.5;   // cups of sugar
    const double butter_per_48 = 1.0;  // cups of butter
    const double flour_per_48 = 2.75;  // cups of flour

    // Ask user how many cookies they want to make
    int desired_cookies;
    cout << "How many cookies would you like to make? ";
    cin >> desired_cookies;

    // Calculate the scaling factor
    double scaling_factor = static_cast<double>(desired_cookies) / 48;

    // Adjust the ingredient amounts
    double required_sugar = sugar_per_48 * scaling_factor;
    double required_butter = butter_per_48 * scaling_factor;
    double required_flour = flour_per_48 * scaling_factor;

    // Display the required ingredient amounts
    cout << "To make " << desired_cookies << " cookies, you will need:\n";
    cout << required_sugar << " cups of sugar\n";
    cout << required_butter << " cups of butter\n";
    cout << required_flour << " cups of flour\n";

    return 0;
}
