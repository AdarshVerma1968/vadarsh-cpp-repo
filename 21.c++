#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter the number=";
    std::cin>>n;
    if(n==1)
    {
        std::cout<<"Sunday";
    }
    else if(n==2)
    {
        std::cout<<"Monday";
    }
    else if(n==3)
    {
        std::cout<<"Tuesday";
    }
    else if(n==4)
    {
        std::cout<<"Wednesday";
    }
    else if(n==5)
    {
        std::cout<<"Thursday";
    }
    else if(n==6)
    {
        std::cout<<"Friday";
    }
    else if(n==7)
    {
        std::cout<<"Saturday";
    }
    else
    {
        std::cout<<"Invalid Day Number";
    }
}