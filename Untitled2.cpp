#include <iostream>
using namespace std;

int main() {
    int a = 50;
    int b = 100;
    int total = a + b;
    cout << "Tong cua hai so la: " << total << endl;
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double tongDoanhThu = 8.6e6;  // 8.6 tri?u
    double tyLe = 0.58;
    double duDoan = tongDoanhThu * tyLe;
    cout << fixed << setprecision(2);
    cout << "Phong sale The East Coast du doan: $" << duDoan << endl;
    return 0;
}