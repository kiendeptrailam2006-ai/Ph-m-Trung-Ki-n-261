#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double chiPhi = 14.95;
    double loiNhuan = 0.35;
    double giaBan = chiPhi * (1 + loiNhuan);
    cout << fixed << setprecision(2);
    cout << "Gia ban bo mach: $" << giaBan << endl;
    return 0;
}