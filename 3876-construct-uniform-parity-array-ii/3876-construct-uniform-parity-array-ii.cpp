class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min_val = nums1[0];
        bool has_odd = false;

        for (int x : nums1) {
            if (x < min_val) {
                min_val = x;
            }
            if (x % 2 != 0) {
                has_odd = true;
            }
        }

        // If the array contains an odd number, the minimum element must be odd.
        if (has_odd && min_val % 2 == 0) {
            return false;
        }

        return true;
    }
};