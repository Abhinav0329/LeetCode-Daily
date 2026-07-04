class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prd = 1;
        int original = n;
        while(original>0){
            int temp = original % 10;
            sum += temp;
            prd *= temp;
            original /= 10;
        }
        int diff = prd - sum;
        return diff;
    }
};