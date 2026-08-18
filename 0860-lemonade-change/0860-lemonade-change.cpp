class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for(int bill : bills){
            if(bill == 5){
                five++;
            }
            else if(bill == 10){
                if(five == 0) {
                return false;// Can't give $5 change
                }
                five--;
                ten++;
            }
            else{// bill = 20
            // Greedy step: Try giving $10 + $5 first
            if (ten > 0 && five > 0) {
                five--;
                ten--;
            }
            else if(five >= 3){// Fallback: Give three $5s
                five -= 3;
            }
            else{
                return false;
            }
        }
    }
    return true;
    }
};