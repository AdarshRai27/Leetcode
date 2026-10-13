class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int>mag;
        for(auto x:nums)mag.push_back(abs(x));
        sort(mag.begin(),mag.end());
        long long neg=0,pos=0,idx=0;
        for(int i=1;i<nums.size();i+=2){
            neg+=pow(mag[idx],2);
            idx++;
        }   
        for(idx;idx<mag.size();idx++)pos+=pow(mag[idx],2);
        return pos-neg;
    }
};