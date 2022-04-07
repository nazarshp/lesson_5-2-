#include <iostream>

int sumTo ()
{
    int value;
    int sum=0;
    std::cout << "Enter number: ";
    std::cin >> value;

    for (int i=1; i <= value; i++)
    {
         sum = sum + i;
         if (i == value)
         {
             std::cout << i;
         }
         else
         {
             std::cout << i << "+";
         }
    }
    return sum;
}
int main()
{
    std::cout << "="<<sumTo();
    return 0;
}
