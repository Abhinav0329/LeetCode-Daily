class Solution {
public:
    int findNumbers(vector<int>& nums){
        int n = nums.size();
        int evendigit = 0;
        for(int i=0;i<n;i++){
            int temp=nums[i];
            int count = 0 ;
            while(temp>0){
                count++;
                temp/=10;
            }
            if(count%2==0){
                evendigit++;
            }
        }
    return evendigit;
    }
};

/*
we can use logarithmic value extraction method to ensure O(1) time complexity
int evencount = 0;
        for (int num : nums) {
            // Using log10 to find the number of digits instantly
            // log10(100) = 2 -> floor(2) + 1 = 3 digits
            int digitCount = floor(log10(num)) + 1;
            
            // Check if the count of digits is even
            if(digitCount%2==0){
                evenCount++;
            }
        }
*/