#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter the number:";
    std::cin>>n;
    if(n>=10 && n<20)
    {
        std::cout<<"Inputted no. is in between 10 to 20";
    }
    else
    {
        std::cout<<"Inputted no. is not in between 10 to 20";
    }
}