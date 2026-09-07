class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;
        int p2 = n - 1;
        int p = m + n - 1;

        while(p1>=0 && p2>=0){
            if(nums1[p1] > nums2[p2]){
                nums1[p--] = nums1[p1--];
            }
            else{
                nums1[p--] = nums2[p2--];
            }
        }

        while(p2 >= 0){
            nums1[p--] = nums2[p2--];
        } 
    }
};

/*
int i = m - 1;     // Pointer for the end of valid elements in nums1
        int j = n - 1;     // Pointer for the end of nums2
        int k = m + n - 1; // Pointer for the very end of nums1's total capacity
        
        // Move backwards, picking the larger element between nums1 and nums2
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        
        // If there are leftover elements in nums2, copy them over
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        
        // No return statement needed since the return type is void!
*/