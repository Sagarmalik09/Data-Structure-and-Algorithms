#include <bits/stdc++.h>
using namespace std;
char *reverse(char *str, int len);
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        char str[10000];
        cin >> str;
        long long int len = strlen(str);
        char *ch = reverse(str, len);
        cout << ch;
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

//return the address of the string
char *reverse(char *str, int len)
{
    stack<char> s;
    int i = 0;

    while (str[i] != '\0')
    {
        s.push(str[i++]);
    }

    i = 0;
    while (!s.empty())
    {
        str[i] = s.top();
        s.pop();
        i++;
    }

    return str;
}