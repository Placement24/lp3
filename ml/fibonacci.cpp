#include <bits/stdc++.h>
using namespace std;

int fibonacciRec(int n) {
    if (n == 0 or n == 1) {
        return n;
    }
    return fibonacciRec(n - 1) + fibonacciRec(n - 2);
}

void fibWithoutRec(int n) {
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < n; i++) {
        cout << fib[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    
    // for (int i = 0; i < n; i++) {
    //     cout << fibonacciRec(i) << " ";
    // }

    fibWithoutRec(n);

    return 0;
}
