class Solution {
public:
    long long int toint(string bin) {
    return stoll(bin,nullptr,2);
}
    string tobin(int num,int size){
    if(num==0)
        return string(size,'0');
    string binary;
    while(num>0){
        binary.push_back((num % 2)+'0');
        num/=2;
    }
    reverse(binary.begin(),binary.end());
    if(binary.length()<size)
        binary=string(size-binary.length(),'0')+binary;
    return binary;
}
    string findDifferentBinaryString(vector<string>& nums) {
        vector<long long int>arr;
        if(nums[0].size()==1){
            if(nums[0]=="1")return "0";
            else return "1";
        }
        for(auto x:nums){
            arr.push_back(toint(x));
        }
        sort(arr.begin(),arr.end());
        long long start=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=start){
                return tobin(start,nums[0].size());
            }
            else start++;
        }
        return tobin(start,nums[0].size());
    }
};