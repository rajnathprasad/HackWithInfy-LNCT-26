class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        int ans;
        if(x==1 || x==0){
            return x;
        }
        while(low<=high){
            long mid=low+(high-low)/2;
            if((mid*mid)>x){
                high=mid-1;
            }
            else{
                low=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};

// Time complexity: O(log n)
// Space complexity: O(1)