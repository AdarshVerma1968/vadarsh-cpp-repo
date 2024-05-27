#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter the number:";
    std::cin>>n;
    if(n%2==0)
    {
        std::cout<<"Inputted number is even";
    }
    else if(n%2!=0)
    {
        std::cout<<"Inputted number is odd";
    }
}