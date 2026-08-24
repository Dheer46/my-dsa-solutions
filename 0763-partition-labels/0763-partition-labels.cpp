class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        int n = s.size();

        int start = 0;
        int i = 0;

        while (i < n) {
            int j = i;

            for (int k = i; k < n; k++) {
                if (s[k] == s[i]) {
                    j = k;
                }
            }

            while (i < j) {
                i++;

                int last = i;

                for (int k = i; k < n; k++) {
                    if (s[k] == s[i]) {
                        last = k;
                    }
                }

                if (last > j) {
                    j = last;
                }
            }

            ans.push_back(j - start + 1);

            i++;
            start = i;
        }

        return ans;
    }
};