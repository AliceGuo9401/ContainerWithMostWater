#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int left(0), right(height.size() - 1);
    int max(0);
    while (left < right && left < height.size() && 0 <= right) {
        int maxTemp = (right - left) * min(height[left], height[right]);
        if (maxTemp > max)
            max = maxTemp;
        if (height[left] <= height[right])
            ++left;
        else if (height[left] > height[right])
            --right;
    }
    return max;
}
int main() {
    vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
    int max = maxArea(height);
    cout << max;
    return 0;
}
