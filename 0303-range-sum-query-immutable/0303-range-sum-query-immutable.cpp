#include <vector>

class NumArray {
private:
    // Memory cache to hold the shifted cumulative sums
    std::vector<int> prefix_sums;
public:
    NumArray(std::vector<int>& nums) {
        int n = nums.size();
        // Size to n + 1 and initialize with zeros to guarantee safety buffer at index 0
        prefix_sums.assign(n + 1, 0);
        
        // Populate cache: prefix_sums[i] stores sum of nums[0 ... i-1]
        for (int i = 0; i < n; i++) {
            prefix_sums[i + 1] = prefix_sums[i] + nums[i];
        }
    }
    int sumRange(int left, int right) {
        // Due to the 1-indexed shift, 'right' maps to 'right + 1'
        // and the subtracted offset 'left - 1' maps to exactly 'left'
        return prefix_sums[right + 1] - prefix_sums[left];
    }
};