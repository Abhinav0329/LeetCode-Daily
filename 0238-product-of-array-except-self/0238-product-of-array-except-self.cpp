class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 1);
        
        // Pass 1: Calculate the prefix product for each element
        int running_prefix = 1;
        for (int i = 0; i < n; i++) {
            output[i] = running_prefix;
            running_prefix *= nums[i];
        }
        // Pass 2: Multiply by the suffix product working backwards
        int running_suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            output[i] *= running_suffix;
            running_suffix *= nums[i];
        }
        return output;
    }
};