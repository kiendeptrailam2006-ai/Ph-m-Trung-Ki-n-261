#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double binh = 20.0;
    double thanhPho = 23.5;
    double caoToc = 28.9;
    double quangDuongThanhPho = binh * thanhPho;
    double quangDuongCaoToc = binh * caoToc;
    cout << fixed << setprecision(2);
    cout << "Quang duong thanh pho: " << quangDuongThanhPho << " dam" << endl;
    cout << "Quang duong cao toc: " << quangDuongCaoToc << " dam" << endl;
    return 0;
}