class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1,f=1,zc=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0){
            f=0;zc++;
            continue;
           }
           else{
            prod=prod*nums[i];
           }
        }
        if(f==0&&zc<2){
            for(int k=0;k<nums.size();k++){
                if(nums[k]==0){
                    nums[k]=prod;
                }
                else{
                    nums[k]=0;
                }
            }
            return(nums);
        }
        if(zc>=2){
            for(int l=0;l<nums.size();l++){
                nums[l]=0;
            }
            return(nums);
        }
        for(int j=0;j<nums.size();j++){
                nums[j]=prod/nums[j];
        }
        return(nums);
    }
};