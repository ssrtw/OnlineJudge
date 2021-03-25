#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string game;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int total = 0, now, mod3[3] = {0}, check, round = 0;
        cin >> game;
        for (char c : game) {
            now = c - '0';
            mod3[now % 3]++;
            total += now;
        }
        check = total % 3;
        if (check == 1 && mod3[1] || check == 2 && mod3[2] || check == 0) {
            if (check) ++round;
            round += mod3[0];
        }
        cout << "Case " << i << ": ";
        if (round % 2) {
            cout << "S\n";
        } else {
            cout << "T\n";
        }
    }
}