#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    if (!(cin >> n)) return 0;

    if (n <= 1) {
        cout << "not prime\n";
        return 0;
    }

    if (n == 2) {
        cout << "prime\n";
        return 0;
    }

    if (n % 2 == 0) {
        cout << "not prime\n";
        return 0;
    }

    bool isPrime = true;
    for (long long i = 3 ; i * i <= n ; i += 2) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "prime\n";
    } else {
        cout << "not prime\n";
    }

    return 0;
}
