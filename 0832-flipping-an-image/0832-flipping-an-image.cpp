class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            int left = 0;
            int right = image[i].size() - 1;

            while (left < right) {
                swap(image[i][left], image[i][right]);

                image[i][left] = !image[i][left];
                image[i][right] = !image[i][right];

                left++;
                right--;
            }

            if (left == right) {
                image[i][left] = !image[i][left];
            }
        }

        return image;
    }
};