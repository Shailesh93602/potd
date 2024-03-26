//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Back-end complete function template for C++

class Solution {
  public:
    bool isValid(string num) {
        if (num.size() > 1 && num[0] == '0')
            return false;
        return true;
    }

    int val(string a, int pos) {
        if (pos >= a.length())
            return 0;
        return (a[pos] - '0');
    }

    string addString(string a, string b) {
        string sum = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0) {
            int t = val(a, i) + val(b, j) + carry;
            sum += (t % 10 + '0');
            carry = t / 10;
            i--;
            j--;
        }
        if (carry)
            sum += (carry + '0');
        reverse(sum.begin(), sum.end());
        return sum;
    }

    bool checkAddition(list<string>& res, string a, string b, string c) {
        if (!isValid(a) || !isValid(b))
            return false;
        string sum = addString(a, b);
        if (sum == c) {
            res.push_back(sum);
            return true;
        }
        if (c.size() <= sum.size() || sum != c.substr(0, sum.size()))
            return false;
        else {
            res.push_back(sum);
            return checkAddition(res, b, sum, c.substr(sum.size()));
        }
    }

    list<string> additiveSequence(string num) {
        list<string> res;
        int l = num.length();

        for (int i = 1; i <= l / 2; i++) {
            for (int j = 1; j <= (l - i) / 2; j++) {
                if (checkAddition(res, num.substr(0, i), num.substr(i, j), num.substr(i + j))) {
                    res.push_front(num.substr(i, j));
                    res.push_front(num.substr(0, i));
                    return res;
                }
            }
        }
        res.clear();
        return res;
    }

    bool isAdditiveSequence(string n) {
        list<string> res = additiveSequence(n);
        if (res.size() == 0)
            return 0;
        else
            return 1;
    }
};

        

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    Solution sol;

    while (t--) {
        string s;
        cin >> s;

        bool result = sol.isAdditiveSequence(s);
        cout << result << endl;
    }

    return 0;
}

// } Driver Code Ends
