#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int prev = 0;

        for(int i = 0; i < s.size(); i++){
            int curr = this->hash.at(s[i]);

            if(prev < curr){
                result -= prev;
                result += curr - prev;
            } else {
                result += curr;
            }

            prev = curr;
        }

        return result;
    }
private:
    map<char, int> hash = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
};