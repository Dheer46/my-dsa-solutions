class Solution {
public:
    string reversePrefix(string word, char ch) {
        for (int j = 0; j < word.size(); j++) {
            if (word[j] == ch) {
                int i = 0;

                while (i < j) {
                    swap(word[i], word[j]);
                    i++;
                    j--;
                }

                break;
            }
        }

        return word;
    }
};