class Solution {
public:
    int fib(int n) {
        if(n <= 1) return n;
        int a = 0;
        int b = 1;
        int next_term = 0;

        for(int i=2;i<=n;i++){
            next_term = a + b;
            a = b;
            b = next_term;
        }
        return next_term;
    }
};