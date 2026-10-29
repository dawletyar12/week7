#include <iostream>
using namespace std;

int minOperations(int n) {
    int ops = 0;
    while (n > 0) {
        if (n % 2 == 0) {
            n = n / 2;          // 0 bit: free
        } else if (n % 4 == 3) {
            n = n + 1;          // run of 1s: add 1 turns it into one carry
            ops++;
        } else {
            n = n - 1;          // single 1: subtract it
            ops++;
        }
    }
    return ops;
}

int main() {
    int n;
    cin >> n;
    cout << minOperations(n) << endl;
    return 0;
}