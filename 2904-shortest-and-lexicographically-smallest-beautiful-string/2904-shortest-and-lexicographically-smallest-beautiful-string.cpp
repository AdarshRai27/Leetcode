class Solution {
public:
    vector<string> valid(string s, int k) {
        vector<string> sub;
        int num = 0;
        for (int l = 0, r = 0; r < s.size(); r++) {
            if (s[r] == '1')
                num++;
            while (num > k) {
                if (s[l] == '1')
                    num--;
                l++;
            }
            if (num == k) {
                while (s[l] == '0')
                    l++;
                string temp = string(s.begin() + l, s.begin() + r + 1);
                sub.push_back(temp);
            }
        }
        return sub;
    }
    string shortestBeautifulSubstring(string s, int k) {
        vector<string> subs = valid(s, k);
        if (subs.empty())
            return "";
        int smoll = subs[0].size();
        for (int i = 0; i < subs.size(); i++)
            smoll = min(smoll, (int)subs[i].size());
        vector<string> anss;
        for (int i = 0; i < subs.size(); i++)
            if (subs[i].size() == smoll)
                anss.push_back(subs[i]);
        sort(anss.begin(), anss.end());
        return anss[0];
    }
};