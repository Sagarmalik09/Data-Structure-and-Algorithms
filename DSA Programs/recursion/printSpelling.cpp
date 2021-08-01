#include <bits/stdc++.h>
using namespace std;
 void printSpell(int n, string str[])
{
    // base condition
    if (n == 0)
        return;

    printSpell(n/10, str);
    cout << str[n % 10] << " ";
}
 int main()
{
    int n;
    cout << "please enter the input" << endl;
    cin >> n;
    string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << "Answer is:";
    printSpell(n, str);
    return 0;
}