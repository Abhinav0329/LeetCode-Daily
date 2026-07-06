class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> result;
        //Step 1 : The Marking pass 
        for(int i=0;i<n;i++){
            // Use abs() because this element might have been flipped negative already
            int target_index = (abs(nums[i])-1);
            // Only flip if it's currently positive to avoid flipping it back
            if(nums[target_index] > 0){
                nums[target_index] = -nums[target_index];
            }
        }
        // Step 2: The Gathering Pass
        for(int i=0;i<n;i++){
            // If a cell is still positive, its corresponding number never appeared
            if(nums[i] > 0){
                result.push_back(i+1);
            }
        }
        return result;
    }
};