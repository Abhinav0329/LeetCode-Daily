class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        // we can use for (int num : nums) is called a Range-Based For Loop (or a For-Each loop) instead of dealing with indices, counters, and array boundaries
        for (int i=0;i<nums.size();i++){
            // Step 1: If the count drops to 0, pick a new candidate
            if (count == 0) {
                candidate = nums[i];
            }
            // Step 2: Update the weight of the candidate
            if (nums[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};