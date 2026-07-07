class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Edge case : empty array
        if(nums.empty()) return 0;
        int current_sum = 0;
        int max_sum = nums[0];

        for(int i=0;i<nums.size();i++){
            current_sum += nums[i];
            max_sum = max(max_sum,current_sum);
            // Reset pattern: if it drops below 0, it ruins future sub-arrays
            if(current_sum < 0){
                current_sum = 0;
            }
        }
        return max_sum;
    }
};

/*
int current_sum = nums[0];
int max_sum = nums[0];
for(int i=1;i<nums.size();i++){
    current_sum = max(nums[i],current_sum+nums[i]);
    max_sum = max(max_sum,current_sum);
Note: we don't need to add if condition. 
*/