#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool hasAppeared(char c, const string &s)
    {
        for (char ch : s)
        {
            if (ch == c)
                return true;
        }
        return false;
    }

    int lengthOfLongestSubstring(string s)
    {
        int max_len = 0; // Initialize to 0 instead of INT_MIN
        for (int i = 0; i < s.size(); i++)
        {
            string ans;
            for (int j = i; j < s.size(); j++)
            { // Adjust loop to check forward
                if (!hasAppeared(s[j], ans))
                {
                    ans += s[j];
                }
                else
                {
                    break; // Stop if a repeating character is found
                }
            }
            max_len = max(max_len, (int)ans.size()); // Update max_len
        }
        return max_len;
    }
};
int main()
{

    return 0;
}
