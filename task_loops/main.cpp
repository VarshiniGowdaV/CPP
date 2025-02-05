#include <iostream>

int main()
{
    int product = 1, sum = 0;

    std::cout << "Adding:" << std::endl;

    for (int i = 1; i <= 30; i++)
    {
        if (i <= 10)
        {
            product =product*i;
        }
        else if (i <= 20)
        {
            sum =sum+ i;
        }
        else
        {
            std::cout << (i + 10) << " ";
        }
    }

    std::cout << "\nProduct : " << product << std::endl;
    std::cout << "Sum : " << sum << std::endl;

    return 0;
}
