#include <iostream>
using namespace std;

long long power(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result = result * base;
    }
    return result;
}

int integerBreak(int n) {
    switch (n) {
        case 2:
            return 1;
        case 3:
            return 2;
    }
    switch (n % 3) {
        case 0:
            return (int)power(3, n / 3);
        case 1:
            return (int)(power(3, n / 3 - 1) * 4);
        default:
            return (int)(power(3, n / 3) * 2);
    }
}

int main() {
    int n;
    cin >> n;
    cout << integerBreak(n) << endl;
    return 0;
}