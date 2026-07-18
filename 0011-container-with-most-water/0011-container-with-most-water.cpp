class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0 ; int r = height.size()-1;
        int ans = 0;
        while(l < r){
        int width = r-l;
            int h = min(height[r] , height[l]);
            int maxwater = h*width;
            ans = max(ans , maxwater);
            (height[l] < height[r])?l++:r--;
        }
        return ans;
    }
};