class Solution {
public:
    string solveEquation(string equation) {
        int sign = 1, sum = 0, coef = 0;
        for (int i = 0, n = equation.size(); i < n;) {
            int currSign = sign, coeff = 0;
            if (equation[i] == '+' || equation[i] == '-') {
                currSign = (equation[i] == '-') ? -sign : sign;
                ++i;
            }
            int num = 0; 
            bool hasNum = false;
            while (i < n && isdigit(equation[i])) {
                num = num * 10 + (equation[i] - '0');
                ++i;
                hasNum = true;
            }
            if (i < n && equation[i] == 'x') {
                if (!hasNum) num = 1;
                coef += currSign * num;
                ++i;
            } 
            else sum -= currSign * num;
            if (i < n && equation[i] == '=') {
                sign = -1;
                ++i;
            }
        }
        if (coef) return "x=" + to_string(sum / coef);
        return sum ? "No solution" : "Infinite solutions";
    }
};