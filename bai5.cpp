#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a = 28, b = 32, c = 37, d = 24, e = 33;
    double sum = a + b + c + d + e;
    double average = sum / 5.0;
    cout << fixed << setprecision(2);
    cout << "Gia tri trung binh: " << average << endl;
    return 0;
}