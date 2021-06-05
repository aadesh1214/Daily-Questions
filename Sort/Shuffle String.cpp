class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        
        for(auto i:indices)
        {
            ans[indices[i]]=s[i];
        }
           return ans; 
    }
};
