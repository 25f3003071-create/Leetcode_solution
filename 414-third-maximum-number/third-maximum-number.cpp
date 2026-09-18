class Solution {
public:
    int thirdMax(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int count = 1;
        int n = nums.size();

        // Start from the largest element
        for (int i = n - 2; i >= 0; i--) {

            // Ignore duplicates
            if (nums[i] != nums[i + 1]) {
                count++;

                // Found the 3rd distinct maximum
                if (count == 3) {
                    return nums[i];
                }
            }
        }

        // If there are less than 3 distinct numbers
        return nums[n - 1];
    }
};