class Solution
{
public:

/*
This is one way to solve the problem, where I am not
creating a new vector ans, just adding the elements of
nums at its back again
*/
  vector<int> getConcatenation(vector<int>& nums)
    {
        int n = nums.size();
        for(int i = 0; i < n; i++)
            nums.push_back(nums[i]);
        return nums;
    }

/*But in this methord I have used a seperate vector ans,
as told by the question. This can also be done in a similar
methord as before, doing the for loop twice, and push_back()
every element in nums twice. But here I have used a different
approach, using the vector insert function
*/

vector<int> getConcatenation(vector<int>& nums)
    {
        vector<int> ans = nums;
        ans.insert(ans.end(), nums.begin(), nums.end());
        return ans;
    }

}
