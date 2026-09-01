class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        int low = 0;
        int high = x;
        int ans = 0;
        while(low <= high){
        long long mid = low + (high-low)/2;
            if(mid * mid == x){
                return mid;
            }
            else if(mid * mid < x){
                ans = mid;// Store candidate answer and search right half
                low = mid + 1;
            }
            else{
                high = mid - 1;// Search left half
            }
        }
        return ans;
    }
};