class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Tracks where the next non-zero element should be written
        int non_zero_pos = 0;
        // Pass 1: Gather and shift all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[non_zero_pos] = nums[i];
                non_zero_pos++;
            }
        }
        // Pass 2: Backfill the remaining trailing slots with zeroes
        for (int i = non_zero_pos; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

/*
💡 ALTERNATIVE ONE-PASS APPROACH USING SWAP:
     * Instead of overwriting values and needing a second loop to backfill zeroes, 
     * you can swap elements in-place during a single pass:
     *
     * for (int i = 0; i < nums.size(); i++) {
     * if (nums[i] != 0) {
     * swap(nums[i], nums[non_zero_pos]);
     * non_zero_pos++;
     * }
     * }
     *
     * This achieves the exact same O(N) time and O(1) space, but eliminates Pass 2!
 */
