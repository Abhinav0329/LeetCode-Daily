class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> sum_map;
        sum_map[0] = -1; // 3. Edge-Case Protection Baseline
        int current_sum = 0;
        int max_len = 0;
        for (int i = 0; i < nums.size(); i++) {
            // 1. Core Mathematical Transformation
            current_sum += (nums[i] == 1) ? 1 : -1;
            
            // 2. Algorithmic Strategy Lookback
            if (sum_map.count(current_sum)) {
                max_len = max(max_len, i - sum_map[current_sum]);
            } else {
                sum_map[current_sum] = i; 
            }
        }
        return max_len;
    }
};