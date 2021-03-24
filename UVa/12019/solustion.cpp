#include <iostream>
using namespace std;

int days[13] = {0, 10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12};
string dayname[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int main() {
    int n, m, d, calc;
    cin >> n;
    while (n--) {
        cin >> m >> d;
        calc = (d - days[m]) % 7;
        if (calc < 0) calc += 7;
        cout << dayname[calc] << endl;
    }
}