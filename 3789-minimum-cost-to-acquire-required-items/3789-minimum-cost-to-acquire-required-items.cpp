class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long com = min(need1, need2);

        long long a1 = 1LL * costBoth * com;
        long long a2 = 1LL * (cost1 + cost2) * com;

        long long common = min(a1, a2);

        long long b1 = 1LL * costBoth * (need1 - com);
        long long b2 = 1LL * cost1 * (need1 - com);

        long long c1 = 1LL * costBoth * (need2 - com);
        long long c2 = 1LL * cost2 * (need2 - com);

        long long rem1 = min(b1, b2);
        long long rem2 = min(c1, c2);

        return common + rem1 + rem2;
    }
};