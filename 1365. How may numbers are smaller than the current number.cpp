class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        vector<int> ans;
        for(int x: nums)
        {
            int cnt = 0;
            for(int y: nums)
                if(y < x)
                    cnt++;
            ans.push_back(cnt);
        }
        return ans;
    }
};
