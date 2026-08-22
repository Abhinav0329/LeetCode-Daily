class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        while(num >=10){
            int sum = 0;
            while(num > 0){
                sum += num % 10;
                num /= 10;
            }
            num = sum;// Reset num to the new digit sum
        }
        return num;
    }
};

/*
This concept in mathematics is called the Digital Root (Modulo 9 arithmetic):
1.Any number in base 10 is congruent to the sum of its digits modulo 9.
2.Example: 38(mod9)=2.
3.The digital root of any non-zero number is simply 1 + (num - 1) % 9.

class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;
        return 1 + (num - 1) % 9;
    }
};
*/