#include <iostream>
using namespace std;
typedef int let;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    let input;
    cout << "Enter the size of array:";
    cin >> input;
    int arr[input];
    for (size_t i = 0; i < input; i++)
    {
        cout << "Numers u want in the array:" << endl;
        cin >> arr[i];
    }
    for (size_t i = 1; i < input; i++)
    {
        let current = arr[i];
        let j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            if (arr[j] > current)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = current;
        }
    }

    for (size_t k = 0; k < input; k++)
    {

        cout << "sorted array element -" << k << "is :" << arr[k] << endl;
    }
}