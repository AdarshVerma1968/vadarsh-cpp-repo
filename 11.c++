#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter the number:";
    std::cin>>n;
    if(n>0)
    {
        std::cout<<"Inputted number is positive";
    }
    else if(n<0)
    {
        std::cout<<"\nInputted number is negative";
    }
}