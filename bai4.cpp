#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double chiPhi = 88.67;
    double thue = chiPhi * 0.0675;
    double tongSauThue = chiPhi + thue;
    double tip = tongSauThue * 0.20;
    double tongHoaDon = tongSauThue + tip;
    cout << fixed << setprecision(2);
    cout << "Chi phi b?a an: $" << chiPhi << endl;
    cout << "So tien thue: $" << thue << endl;
    cout << "So tien tip: $" << tip << endl;
    cout << "Tong hoa don: $" << tongHoaDon << endl;
    return 0;
}