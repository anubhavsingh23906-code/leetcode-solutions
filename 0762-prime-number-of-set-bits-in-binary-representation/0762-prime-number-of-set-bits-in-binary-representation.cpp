class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int ans = 0;

        for (int num = left; num <= right; num++) {

            // Count set bits
            int bits = __builtin_popcount(num);

            // Check if number of set bits is prime
            if (isPrime(bits))
                ans++;
        }

        return ans;
    }
};