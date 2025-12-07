#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double giaTri = 95.0;
    double thueTieuBang = giaTri * 0.04;
    double thueQuan = giaTri * 0.02;
    double tongThue = thueTieuBang + thueQuan;
    cout << fixed << setprecision(2);
    cout << "Tong thue ban hang: $" << tongThue << endl;
    return 0;
}