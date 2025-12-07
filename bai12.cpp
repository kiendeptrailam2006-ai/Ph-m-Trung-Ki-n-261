#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double dienTich = 391876.0;
    double motMau = 43560.0;
    double soMau = dienTich / motMau;
    cout << fixed << setprecision(2);
    cout << "So mau dat: " << soMau << endl;
    return 0;
}