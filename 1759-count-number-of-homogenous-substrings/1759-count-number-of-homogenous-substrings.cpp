class Solution {
public:
    int countHomogenous(string s) {
        vector<string> homo;
        int ans = 0;
        int i = 0;
        while (i + 1 < s.size()) {
            if (s[i] == s[i + 1]) {
                long long t =1;
                while (i < s.size() - 1 && s[i] == s[i + 1]) {
                    t ++;
                    i++;
                }
                //t ++; 
                ans = (ans + (t * (t + 1)) / 2) % 1000000007;
                
                i++;
            } else {
                i++;
                ans = (ans + 1) % 1000000007;
            }
        }
            if (i == s.size() - 1)
                ans = (ans + 1) % 1000000007;
            // for (int j = 0; j < homo.size(); j++) {
            //     long long n = homo[j].size(); 
            //     ans = (ans + (n * (n + 1)) / 2) % 1000000007;
            // }
            return ans;
        }
    };