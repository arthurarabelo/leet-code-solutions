#include <limits.h>

class Solution {
public:
    int reverse(int x){
        int next = 0, previous = 0;
        while(x != 0){
            int last_digit = x % 10;

            if(previous > INT_MAX / 10 || previous < INT_MIN / 10){
                return -1;
            }

            next = previous * 10 + last_digit;
            previous = next;
            x /= 10;
        }
        return next;
    }

    bool isPalindrome(int x) {
        if(x < 0) return false;

        int reverse = this->reverse(x);
        if(reverse >= 0){
            return reverse == x;
        }
        return false;
    }
};