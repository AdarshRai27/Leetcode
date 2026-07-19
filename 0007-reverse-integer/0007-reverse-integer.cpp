class Solution {
public:
    int reverse(int x) {
        int isneg=0;
         long long  int revnum=0,temp=x;
        if (x<0){
            isneg=1;
            temp=temp*-1;
        }
      
        while(temp>0){
            revnum=revnum*10+temp%10;
            temp=temp/10;
        }
        if(revnum>=INT_MAX) return 0;
        if(isneg) revnum=revnum*-1;
        return revnum;
        
    }
};