class Solution {
private:
    int m = 1e9 + 7;
    int binpow(long long a, long long b) {
        int res = 1;
        while (b > 0) {
            if (b & 1)
                res = res * a % m;
            a = a * a % m;
            b >>= 1;
        }
        return res % m;
    }

public:
    int countGoodNumbers(long long n) {
        long long a = n / 2;
        long long evenCount = (n % 2 == 1) ? binpow(5 , a + 1) : binpow(5 , a);
        long long oddCount = binpow(4 , a);

        long long ans = evenCount * oddCount;
        return ans % m;
    }
};