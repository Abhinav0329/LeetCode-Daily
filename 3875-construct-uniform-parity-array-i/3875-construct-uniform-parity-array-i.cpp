class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        vector<int> nums2(n);
        for(int i=0;i<n;i++){
            if(nums1[i] % 2 == 0 || nums1[i] != 0){
                nums2[i] = nums1[i];
            }
        }
        return true;
    }
};
/*
nums1 contains distinct integers, if it has at least one odd number, we can make all elements odd. If it has no odd numbers, all elements are already even.
Parity Rules:
even−even=even
odd−odd=even
even−odd=odd
odd−even=odd
*/