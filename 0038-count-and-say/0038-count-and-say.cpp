class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int k = 2; k <= n; k++) {
            string next = "";
            int cnt = 1;
            for(int i = 0; i < s.size(); i++) {
                while(i + 1 < s.size() && s[i] == s[i + 1]) {
                   cnt++;
                   i++;
                }
               next += to_string(cnt);
               next += s[i];
               cnt = 1;
            }
            s = next;
        }
        return s;
    }
};