class Solution {
public:
    int maximumXorProduct(long long a, long long b, int n) {
        const long long MOD = 1e9 + 7;

        long long ax = (a >> n) << n;
        long long bx = (b >> n) << n;

        for (int i = n - 1; i >= 0; i--) {
            int abit = (a >> i) & 1;
            int bbit = (b >> i) & 1;

            if (abit == bbit) {
                ax |= (1LL << i);
                bx |= (1LL << i);
            } 
            else if (ax < bx) {
                ax |= (1LL << i);
            } 
            else {
                bx |= (1LL << i);
            }
        }

        ax %= MOD;
        bx %= MOD;

        return (ax * bx) % MOD;
    }
};