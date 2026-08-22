class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prd = 1;
        int original = n;
        while(original > 0){
        int digit = original % 10;
            sum += digit;
            prd *= digit;
            original /= 10; 
        }
        int total_sum = sum + prd;
        // Guard against division by zero
        if (total_sum == 0) return false;
        return (n % total_sum == 0);
    }
};