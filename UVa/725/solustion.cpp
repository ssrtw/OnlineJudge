#include <string.h>

#include <iostream>
using namespace std;
int used[10] = {0};
bool check(int i) {
    int tmp;
    if (i < 10000) used[0] = 1;
    while (i != 0) {
        tmp = i % 10;
        if (used[tmp]) return false;
        used[tmp] = 1;
        i /= 10;
    }
    return true;
}

bool calc(int n) {
    int product, hasOne = 0;
    for (int i = 1234; i < 100000; i++) {
        if (check(i)) {
            product = i * n;
            if (product > 99999) break;
            if (product > 9999 && check(product)) {
                printf("%d / %05d = %d\n", product, i, n);
                hasOne = 1;
            }
        }
        memset(used, 0, sizeof(used));
    }
    if (hasOne)
        return true;
    else
        return false;
}

int main() {
    int n;
    while ((cin >> n) && n != 0) {
        if (!calc(n)) {
            printf("There are no solutions for %d.\n", n);
        }
    }
}