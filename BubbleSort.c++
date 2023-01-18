#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int input;
    cout << "Enter the size of array:";
    cin >> input;
    int arr[input];
    for (size_t i = 0; i < input; i++)
    {
        cout << "Numers u want in the array:" << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < input - 1; i++)
    {
        for (size_t j = i; j < input - 1; j++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
    for (size_t k = 0; k < input; k++)
    {

        cout << "sorted array element- " << k + 1 << "is :" << arr[k] << endl;
    }
}