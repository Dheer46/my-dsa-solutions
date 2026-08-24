class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.size();
        while(i<n){
            int j = i;
            while(j<n && s[j]!=' '){
                j++;
            }
            int left = i;
            int right = j-1;

            while(left<right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
            i=j+1;
        }
        return s;
    }
};