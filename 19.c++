#include<iostream>
int main()
{
    int y;
    std::cout<<"Enter a year:";
    std::cin>>y;
    if(y%400==0)
    {
        std::cout<<"It's a leap year";
    }
    else if(y%100==0)
    {
        std::cout<<"It's not a leap year";
    }
    else if(y%4==0)
    {
        std::cout<<"It's a leap year";
    }
    else
    {
        std::cout<<"It's a leap year";
    }
}