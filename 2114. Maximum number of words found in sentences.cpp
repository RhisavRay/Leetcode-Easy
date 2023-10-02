class Solution {
public:
    int mostWordsFound(vector<string>& sentences)
    {
        int max = 0;
        for(string a: sentences)
        {
            int cnt = 0;
            for(int i = 0; i < a.size(); i++)
                if(isspace(a[i]))
                    cnt++;
            if(cnt > max)
                max = cnt;
        }
        return (max + 1);
    }
};
