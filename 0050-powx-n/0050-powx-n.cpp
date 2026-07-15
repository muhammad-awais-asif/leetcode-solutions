class Solution {
public:
    double myPow(double x, int n) {
    long bitform = n; double ans = 1;
    
    if(bitform<0){
        x = 1/x;
        bitform = -bitform;
    }
    while(bitform >0){
        if(bitform%2== 1)
        ans*= x;
        x*=x;
        bitform/=2;
    }
    return ans;

    }
};