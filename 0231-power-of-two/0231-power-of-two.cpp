class Solution {
public:
    bool isPowerOfTwo(int n) {
        //Iterative Approach (O(logn))
        if(n <= 0) return false;

        while(n % 2 == 0){
            n /= 2;
        }
        return n == 1;
    }
};

/*
Bitwise Trick (O(1) — Optimal & Best for Contests)
    Must be positive, and n & (n - 1) removes the single set bit
        return n > 0 && (n & (n - 1)) == 0;
*/