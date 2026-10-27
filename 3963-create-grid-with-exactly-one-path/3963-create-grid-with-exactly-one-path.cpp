class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>ans;
        string first_row="";
        for(int i=0;i<n;i++)first_row+=".";
        string other="";
        for(int i=0;i<n-1;i++)other+="#";
        other+=".";
        ans.push_back(first_row);
        for(int i=0;i<m-1;i++)ans.push_back(other);
        return ans;
    }
};