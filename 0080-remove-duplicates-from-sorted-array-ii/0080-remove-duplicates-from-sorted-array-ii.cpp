class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        // Guard clause: if the array has 0, 1, or 2 elements, no adjustments are needed
        if (n <= 2) return n;
        int k = 2;// The write pointer tracking our allowed boundary
        for(int i=2;i<n;i++){
            // Compare the incoming element with the element written 2 steps back
            if(nums[i]!=nums[k-2]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};