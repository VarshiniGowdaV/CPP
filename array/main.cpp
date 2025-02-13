#include <iostream>

using namespace std;

int main()
{
    int array[4]={10,20,90,5};
    int max=array[0];
    int min=array[0];
    for (int i=0;i<=3;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    cout<<"greater number:"<<max<<endl;
    cout<<"smaller number:"<<min<<endl;
    return 0;
}
