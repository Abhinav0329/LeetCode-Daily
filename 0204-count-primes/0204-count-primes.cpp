#include <vector>

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        std::vector<char> isPrime(n, 1);
        int count = 1; // Account for prime number 2

        // Process only odd numbers
        for (long long i = 3; i < n; i += 2) {
            if (isPrime[i]) {
                count++;
                if (i * i < n) {
                    for (long long j = i * i; j < n; j += 2 * i) {
                        isPrime[j] = 0;
                    }
                }
            }
        }

        return count;
    }
};