class Solution {
    private:
    // Helper function to check if a character is a vowel
    bool isVowel(char c){
        return c=='A' || c=='E' || c=='I' || c=='O' || c=='U'||
        c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    public:
    string reverseVowels(string s) {
        int left = 0;
        int right = static_cast<int>(s.length()-1);

        while(left < right){
            // Move left pointer until a vowel is found
            while(left < right && !isVowel(s[static_cast<size_t>(left)])){
                left++;
            }
            // Move right pointer until a vowel is found
            while(left < right && !isVowel(s[static_cast<size_t>(right)])){
                right--;
            }
            // Swap the vowels
            if(left < right){
                std::swap(s[static_cast<int>(left)],s[static_cast<int>(right)]);
                left++;
                right--;
            }
        }
        return s;
    }
};