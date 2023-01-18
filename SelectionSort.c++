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
        for (size_t j = i + 1; j < input; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (size_t k = 0; k < input; k++)
    {

        cout << "sorted array element -" << k << "is :" << arr[k] << endl;
    }
}