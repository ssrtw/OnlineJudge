#include <iostream>
#include <string>
using namespace std;
string key = "22233344455566677778889999";
int main() {
    string row;
    while (cin >> row) {
        for (char c : row)
            if (c & '@')
                cout << key[c - 'A'];
            else
                cout << c;
        cout << endl;
    }
}