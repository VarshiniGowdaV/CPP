#include <iostream>
using namespace std;
int size = 4;
void sortAscending(int arr[], int size)
{
    for (int i = 0; i < 4 - 1; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int size)
{
    for (int i = 0; i < 4 - 1; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {10, 200, 5, 300};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortAscending(arr, size);
    cout << "Ascending order: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " "<<endl;
    }
    sortDescending(arr, size);
    cout << "Descending order: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " "<<endl;
    }
    return 0;
}

