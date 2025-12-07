#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double luongKy = 2200.0;
    int soKy = 26;
    double annualPay = luongKy * soKy;
    cout << fixed << setprecision(2);
    cout << "Tong thanh toan hang nam: $" << annualPay << endl;
    return 0;
}