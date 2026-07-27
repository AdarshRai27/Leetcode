class Solution {
public:
    char compliment(char x){
        if(x=='1')return '0';
        else return '1';
    }
    string findDifferentBinaryString(vector<string>& nums) {
        string ans="";
        for(int i=0;i<nums.size();i++){
            ans+=compliment(nums[i][i]);
        }
        return ans;
    }
};