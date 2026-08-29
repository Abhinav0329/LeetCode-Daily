class Solution {
public:
    bool isVowel(char c){
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    int maxVowels(string s, int k) {
        int count = 0;
        int n = static_cast<int>(s.length());
        for(int i=0;i<k;i++){
            if(isVowel(s[i])) count++;
        }
        int maxcount = count;
        for(int i=k;i<n;i++){
            if(isVowel(s[i])) count++; // Add incoming element
            if(isVowel(s[i-k])) count--; //remove the outgoing element
            maxcount = std::max(maxcount,count);
        }
        return maxcount;
    }
};