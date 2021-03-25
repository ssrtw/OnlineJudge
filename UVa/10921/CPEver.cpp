#include <iostream>
#include <string>
using namespace std;
string key = "22233344455566677778889999";
int main() {
    string row;
    while (cin >> row) {
        int alpha = 0, dash = 0;
        for (char c : row) {
            if (c & '@') {
                cout << key[c - 'A'];
                alpha++;
            } else {
                if (c == '-') dash++;
                cout << c;
            }
        }
        cout << " " << alpha << " " << dash << endl;
    }
}