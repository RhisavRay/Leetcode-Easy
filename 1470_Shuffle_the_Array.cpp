class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n)
    {
        int x = nums.size();
        vector<int> ans;
        for(int i  = 0; i < n; i++)
        {
            /*
            One way is to push_back each element one by one, the other is to insert them at the end if the vector
            
            ans.push_back(nums[i]);
            ans.push_back(nums[n + i]);
            */
            ans.insert(ans.end(), {nums[i], nums[n + i]});
        }
        return ans;
    }
};
