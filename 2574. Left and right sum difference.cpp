class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums)
    {
        vector<int> ans;
        int leftSum = 0, rightSum = 0;
        int l = nums.size();
        for(int i = 1; i < l; i++)
            rightSum += nums[i];
        ans.push_back(abs(leftSum - rightSum));
        for(int i = 1; i < l; i++)
        {
            leftSum += nums[i - 1];
            rightSum -= nums[i];
            ans.push_back(abs(leftSum - rightSum));
        }
        return ans;
    }
};
