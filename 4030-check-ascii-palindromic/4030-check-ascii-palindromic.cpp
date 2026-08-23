class Solution {
public:
    bool isPalindromic(string s) {
        string binary = "";

        for (int i = 0; i < s.length(); i++) {
            int ascii = s[i];
            binary += bitset<8>(ascii).to_string();
        }

        string original = binary;

        reverse(binary.begin(), binary.end());

        return original == binary;
    }
};