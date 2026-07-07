class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum = 0 ;
        int Max = INT_MIN;
        for(int i : nums){
            cursum += i;
            Max = max(Max , cursum);
            if(cursum<0){
                cursum = 0;
            }
        }
        return Max;
    }
};