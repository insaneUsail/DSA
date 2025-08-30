class Solution {
public:
    const int MOD = 1e9 + 7;

    long long modPow(long long base, long long exp) {
        if (exp == 0) return 1; // base case
        long long half = modPow(base, exp / 2);
        long long res = (half * half) % MOD;
        if (exp % 2 == 1) {
            res = (res * base) % MOD;
        }
        return res;
    }

    int countGoodNumbers(long long n) {
        long long evenCount = modPow(5, (n + 1) / 2);
        long long oddCount  = modPow(4, n / 2);
        return (evenCount * oddCount) % MOD;
    }
};
