class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1 ; int end = arr.size() -2;
        while(st <= st){
            int mid = st + (end-st)/2;
            if(arr[mid] >= arr[mid-1] && arr[mid] >= arr[mid+1]) return mid;
            if(arr[mid] > arr[mid-1]){
                st= mid+1;
            }
            else
            end = mid-1;
        }
        return -1;
    }
};