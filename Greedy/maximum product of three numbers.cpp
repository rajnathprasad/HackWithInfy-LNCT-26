class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int choice1 = nums[n-1] * nums[n-2] * nums[n-3];
        int choice2 = nums[0] * nums[1] * nums[n-1];
        
        return max(choice1, choice2);
    }
};

// Time Complexity: O(n log n)
// Space Complexity: O(1)