#include <bits/stdc++.h>
using namespace std;

vector<long long> getPrimeFactors(long long n) {
    vector<long long> primes;

    for (long long p=2; p * p <= n; p++) {
        if (n % p == 0) {
            primes.push_back(p);
            while (n % p == 0) n /= p;
        }
    }

    if (n > 1) primes.push_back(n);
    return primes;
}

vector<pair<long long, int>> primeFactorize(long long n) {
    vector<pair<long long, int>> factors;

    for (long long p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            int cnt = 0;
            while (n % p == 0) {
                n /= p;
                cnt++;
            }
            factors.push_back({p, cnt});
        }
    }

    if (n > 1) factors.push_back({n, 1});
    return factors;
}

int main() {
    long long n;
    cin >> n;

    vector<long long> primes = getPrimeFactors(n);
    cout << "Distinct prime factors: ";
    for (long long p : primes) cout << p << " ";
    cout << endl;

    vector<pair<long long, int>> factors = primeFactorize(n);
    cout << "Prime factorization: ";
    for (auto& factor : factors) cout << factor.first << "^" << factor.second << " ";
    cout << endl;
}

// 360
// Distinct prime factors: 2 3 5 
// Prime factorization: 2^3 3^2 5^1