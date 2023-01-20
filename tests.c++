#include <iostream>
using namespace std;
typedef int let;
int main()
{
    let n, s;
    cin >> s;
    let arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        /* code */
    }
    let st = 0, ep = 0, sum = 0;
    while (ep < n && sum + arr[ep] <= s)
    {
        sum = sum + arr[ep];
        ep++;
    }
    if (sum == s)
    {
        cout << "success" << endl;
        return 0;
    }

    while (ep < s)
    {
        sum += arr[ep];
        while (sum > s)
        {
            sum -= arr[st];
            st++;
        }
        if (sum == s)
        {
            st = st + 1;
            ep = ep + 1;
            break;
        }
        ep++;
    }

    cout << st << " " << ep << endl;
}
