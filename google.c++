#include <iostream>
using namespace std;
typedef int let;
int main()
{
    let n;
    let arr[n];

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    const let N = 1e6 + 2;
    let idx[N];
    for (size_t i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    let mini = INT32_MAX;
    for (size_t i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            /* code */
            mini = min(min, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
        /* code */
    }
    if (mini == INT32_MAX)
    {
        /* code */
        cout << "-1" << endl;
    }
    else
    {
        cout << min + 1 << endl;
        cout << arr[min] << endl;
    }
};