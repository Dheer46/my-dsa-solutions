class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int base = 2; base <= n-2; base++){
            int num = n;
            vector<int> digits;
            while(num>0){
                digits.push_back(num % base);
                num = num/base;
            }
            int i = 0;
            int j = digits.size()-1;
            while(i<j){
                if(digits[i]!=digits[j]){
                    return false;
                }
                i++;
                j--;
            }

        }
        return true;
    }
};