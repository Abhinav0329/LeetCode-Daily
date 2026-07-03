class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        // Step 1: Force duplicates to stand next to each other
        sort(nums.begin(),nums.end());
        // Step 2: Check adjacent pairs
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                return 1;
            }
        }
        return 0;// All elements are distinct
    }
};