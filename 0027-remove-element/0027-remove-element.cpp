class Solution {
public:
// This function returns the integer 'k' and modifies 'nums' in-place because of the '&' reference
    int removeElement(vector<int>& nums, int val){
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k; //Returns the count of valid elements (int), not the vector
    }
};