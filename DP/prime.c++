/* To Find the Prime NUMber */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    } else if (n <= 3) {
        return true;
    } else if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
    return true;
}

vector<int> findPrimesInRange(int start, int end) {
    vector<int> primes;
    for (int num = max(start, 2); num <= end; ++num) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
    }
    return primes;
}

int main() {
    int startRange = 1;
    int endRange = 100;
    vector<int> primeList = findPrimesInRange(startRange, endRange);

    cout << "Prime numbers in the range [" << startRange << ", " << endRange << "] are:" << endl;
    for (int prime : primeList) {
        cout << prime << " " << endl;
    }
    cout << endl;

    return 0;
}
