class Solution {
public:
    bool isPalindrome(int x){
    // Base case: negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
        if(x<0 || (x%10==0 && x!=0)){
        return 0;
        }
        int original = x;
        long reversedigit = 0;
        while(original>0){
        int temp = original%10;
        reversedigit = reversedigit*10+temp;
        original /= 10;// original drops down to 0 here
        }
        if(reversedigit==x){
            return 1;
        }
        return 0;
    }
};