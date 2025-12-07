#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double mon1 = 15.59, mon2 = 24.59, mon3 = 6.59, mon4 = 12.59, mon5 = 3.59;
    double tongTam = mon1 + mon2 + mon3 + mon4 + mon5;
    double thue = tongTam * 0.07;
    double tongTra = tongTam + thue;
    cout << fixed << setprecision(2);
    cout << "Gia mon 1: $" << mon1 << endl;
    cout << "Gia mon 2: $" << mon2 << endl;
    cout << "Gia mon 3: $" << mon3 << endl;
    cout << "Gia mon 4: $" << mon4 << endl;
    cout << "Gia mon 5: $" << mon5 << endl;
    cout << "Tong tam tinh: $" << tongTam << endl;
    cout << "So tien thue: $" << thue << endl;
    cout << "Tong phai tra: $" << tongTra << endl;
    return 0;
}