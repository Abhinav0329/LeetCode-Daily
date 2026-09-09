class Solution {
public:
    long long countCommas(long long n) {
        long long original = n;
        long long ans = 0;
        long long p = 1000;
        while(p <= original){
            ans += n-p+1;
            p *= 1000;
        }
        return ans;
    }
};