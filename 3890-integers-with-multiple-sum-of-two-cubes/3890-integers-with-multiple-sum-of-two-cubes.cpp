class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        unordered_map<int, int> fr;
        vector<int> more;
        for (int i = 1; 1LL * i * i * i <= n; i++) {
            long long a = 1LL * i * i * i;

            for (int j = i; 1LL * j * j * j <= n; j++) {
                long long b = 1LL * j * j * j;
                long long sum = a + b;

                if (sum > n)
                    break;

                if (++fr[sum] == 2)
                    more.push_back(sum);
            }
        }
        sort(more.begin(), more.end());
        return more;
    }
};