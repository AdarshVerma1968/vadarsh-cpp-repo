#include<iostream>
int main()
{
    int n,t=1,f=1;
    std::cout<<"Enter the number:";
    std::cin>>n;
    for( ;t<=n;t++)
    {
        f=f*t;
    }
    std::cout<<"Factorial of a number is:"<<f;
}