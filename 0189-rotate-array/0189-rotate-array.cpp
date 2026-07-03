class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        //Handle cases where k is larger than array size
        k = k % n;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=nums[(i-k+n)%n];
        }
        nums = ans;//Assign the temporary result back to the original vector
    }
};