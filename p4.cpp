#include <iostream>
using namespace std;

void printRepeat(char c, int times) {
    for (int i = 0; i < times; i++) {
        cout << c;
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    int extra = k - n;
    int zs = extra / 25;
    int rest = extra % 25;

    int as = n - zs;
    if (rest > 0) {
        as = as - 1;
    }

    printRepeat('a', as);
    if (rest > 0) {
        cout << (char)('a' + rest);
    }
    printRepeat('z', zs);
    cout << endl;
    return 0;
}