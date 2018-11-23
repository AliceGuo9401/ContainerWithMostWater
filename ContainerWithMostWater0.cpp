#include <iostream>
#include <vector>

using namespace std;
/*start*/
int maxArea(vector<int>& height) {
    vector<int> maxArea;
    for (int i = 0; i < height.size() - 1; ++i) {
        int maxAreaI(0);
        int temp(0);
        for (int j = i + 1; j < height.size(); ++j) {
            if (height[i] <= height[j]) {
                temp = height[i] * (j - i);
            }else if (height[i] > height[j]) {
                temp = height[j] * (j - i);
            }
            if (temp > maxAreaI) {
                maxAreaI = temp;
            }
        }
        maxArea.push_back(maxAreaI);
    }
    int max(0);
    for(int i = 0; i < maxArea.size(); ++i){
        if (max < maxArea[i])
            max = maxArea[i];
    }
    return max;
}
/*end*/
int main() {
    vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
    int max = maxArea(height);
    cout << max;
    return 0;
}
