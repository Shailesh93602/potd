class Solution {
public:
    string fractionAddition(string expression) {
        int n = expression.size();
        int numerator = 0;
        int denominator = 1;
        int i = 0;
        
        while(i < n) {
            int sign = 1;
            if(expression[i] == '+' || expression[i] == '-') {
                if(expression[i] == '-') sign = -1;
                i++;
            }

            int num = 0;
            while(i < n && isdigit(expression[i])) {
                num *= 10;
                num += (expression[i]-'0');
                i++;
            }

            num *= sign;
            i++;

            int den = 0;
            while(i < n && isdigit(expression[i])) {
                den *= 10;
                den += (expression[i] - '0');
                i++;
            }

            numerator *= den;
            numerator += num * denominator;
            denominator *= den;

            int gcdVal = gcd(abs(numerator), denominator);
            numerator /= gcdVal;
            denominator /= gcdVal;
        } 

        return to_string(numerator) + "/" + to_string(denominator);
    }
};
