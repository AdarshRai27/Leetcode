class Solution {
public:
    bool check(int n) {
        if (n < 2)
            return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int rev = 0, temp = n;
        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        int start = min(n, rev);
        int end = max(n, rev);
        int sum = 0;
        if (start <= 2 && end >= 2)
            sum += 2;
        if (start % 2 == 0)
            start++;
        for (; start <= end; start += 2) {
            if (check(start))
                sum += start;
        }
        return sum;
    }
};