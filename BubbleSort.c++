// #include <iostream>
// using namespace std;
// typedef int let;
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// let main()
// {
//     let input;
//     cout << "Enter the size of array:";
//     cin >> input;
//     int arr[input];
//     for (size_t i = 0; i < input; i++)
//     {
//         cout << "Numers u want in the array:" << endl;
//         cin >> arr[i];
//     }

//     for (int i = 0; i < input - 1; i++)
//     {
//         for (size_t j = 0; j < input - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
//     for (size_t k = 0; k < input; k++)
//     {

//         cout << "sorted array element- " << k + 1 << "is :" << arr[k] << endl;
//     }
// }
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
            mini = min(mini, idx[arr[i]]);
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
        cout << mini + 1 << endl;
        cout << arr[mini] << endl;
    }
};