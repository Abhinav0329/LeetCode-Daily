class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        for (int num : nums) {
            // Step 1: If the count drops to 0, pick a new candidate
            if (count == 0) {
                candidate = num;
            }
            // Step 2: Update the weight of the candidate
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};