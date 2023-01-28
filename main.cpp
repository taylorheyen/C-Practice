#include <iostream>

using namespace std;

int main() {
    int sales = 95000;
    double state_tax = sales * .04;
    double county_tax =  sales * .02;
    double after_tax = sales - (state_tax + county_tax);

    cout << "Sales: $" << sales << endl << "State Tax Deduction: $"
         << state_tax << endl << "County Tax Deduction: $" << county_tax << endl
         << "After Tax Deductions: $" << after_tax;
    return 0;
}
