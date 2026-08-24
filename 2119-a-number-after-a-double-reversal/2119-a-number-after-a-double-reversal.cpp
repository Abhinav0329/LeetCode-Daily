class Solution {
public:
    bool isSameAfterReversals(int num) {
        int original = num;
    //first reversal
        int r1 = 0; 
        while(num != 0){
            r1 = r1 * 10 + (num % 10);
            num /= 10;
        }
    // second reversal
        int r2 = 0; 
        int temp = r1;
        while(temp != 0){
            r2 = r2 * 10 + (temp% 10);
            temp /= 10;
        }
    return original == r2; 
    }
};