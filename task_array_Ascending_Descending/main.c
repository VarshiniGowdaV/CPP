#include <algorithm>
//using namespace std;

int main() {
    int arr[] = {10, 200, 5, 300};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sorting in ascending order
    sort(arr, arr + size);
    cout << "Ascending order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sorting in descending order
    sort(arr, arr + size, greater<int>());
    cout << "Descending order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
