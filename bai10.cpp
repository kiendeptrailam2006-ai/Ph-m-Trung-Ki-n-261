#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double binh = 15.0;
    double dam = 375.0;
    double damPerGallon = dam / binh;
    cout << fixed << setprecision(2);
    cout << "So dam tren moi gallon: " << damPerGallon << endl;
    return 0;
}