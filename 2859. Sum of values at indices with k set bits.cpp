class Solution {
public:
    int countSetBits(int n)
    {
        int cnt = 0;
        while(n > 0)
        {
            if(n % 2)
                cnt++;
            n /= 2;
        }
        return cnt;
    }
    
    int sumIndicesWithKSetBits(vector<int>& nums, int k)
    {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
            if(countSetBits(i) == k)
                sum += nums[i];
        return sum;
    }
};
