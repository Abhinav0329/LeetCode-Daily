class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty()) return 0;
        // Tracks the absolute highest subarray sum found across the entire execution
        int max_sum = nums[0];
        // Tracks the local cumulative strength of the current active subarray chain
        int current_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            // Kadane's Core Choice: Decide whether to carry over the past sum 
            // or discard a negative liability and start a fresh window at nums[i]
            current_sum = max(nums[i], current_sum + nums[i]);
            // Update the global record if the current chain exceeds our best historical sum
            max_sum = max(current_sum, max_sum);
        }
        return max_sum;
    }
};