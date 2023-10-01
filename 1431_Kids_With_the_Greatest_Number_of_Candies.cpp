class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        vector<bool> ans;
        int max = 0;
        for(int x: candies)
            if(x > max)
                max = x;
        for(int x: candies)
            ans.push_back((x + extraCandies) >= max);
        return ans;
    }
};
