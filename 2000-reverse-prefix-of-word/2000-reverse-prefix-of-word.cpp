class Solution {
public:
    string reversePrefix(string word, char ch) {
        // 1. Find index of first occurrence of ch
        int right = -1;
        for(int i=0;i<word.size();i++){
            if(word[i] == ch){
                right = i;
                break;
            }
        }
        //2. If character isn't found, return word untouched
        if(right == -1) return word;

        // 3. Reverse from index 0 to right
        int left = 0;
        while(left < right){
            std::swap(word[left],word[right]);
            left++;
            right--;
        }
        return word;
    }
};