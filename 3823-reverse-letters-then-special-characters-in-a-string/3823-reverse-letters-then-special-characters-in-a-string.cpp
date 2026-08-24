class Solution {
public:
    string reverseByType(string s) {
        // Pass 1: Reverse only lowercase letters
        int l = 0; int r = s.size()-1; 
        while(l < r){
            if(!std::islower(s[l])){
                l++;
            }
            else if(!std::islower(s[r])){
                r--;
            }
            else{
                std::swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        // Pass 2: Reverse only special characters
        l = 0; r = s.size()-1;
        while(l < r){
            if(std::islower(s[l])){
                l++;
            }
            else if(std::islower(s[r])){
                r--;
            }
            else{
                std::swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};