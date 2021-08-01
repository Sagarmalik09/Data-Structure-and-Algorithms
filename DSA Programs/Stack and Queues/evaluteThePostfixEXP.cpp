// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string exp)
    {
        stack<int> tac;
        for (char c : exp)
        {
            if (c >= '0' && c <= '9')
                tac.push(c - '0');
            else
            {
                int b = tac.top();
                tac.pop();
                int a = tac.top();
                tac.pop();
                if (c == '*')
                    tac.push(a * b);
                else if (c == '/')
                    tac.push(a / b);
                else if (c == '+')
                    tac.push(a + b);
                else
                    tac.push(a - b);
            }
        }
        return tac.top();
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--)
    {
        string S;
        cin >> S;
        Solution obj;

        cout << obj.evaluatePostfix(S) << endl;
    }
    return 0;
}
// } Driver Code Ends