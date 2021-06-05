class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
    int i =0;
    int j= arr.size()-1;
    int median = arr[(j / 2)];
    vector<int> ans;
    while(k--)
    {
        if(abs(arr[i] - median) > abs(arr[j]-median) )
        {
            ans.push_back(arr[i]);
            i++;
        }
        else 
        {
            ans.push_back(arr[j]);
            j--;
        }
     
    }
    return ans;
    }
};
