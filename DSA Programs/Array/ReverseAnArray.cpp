#include <iostream>
using namespace std;

int main()
{
    int t, arr[100];
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = n; i > 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}