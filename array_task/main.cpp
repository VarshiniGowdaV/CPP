#include <iostream>
#include <algorithm>
using namespace std;
int size=4;
int main()
{
    int arr[]={10,200,5,300};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    cout<<"Ascending order:"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    sort(arr,arr+size,greater<int>());
    cout<<"Descending order:"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}
