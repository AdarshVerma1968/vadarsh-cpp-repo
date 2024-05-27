#include<iostream>
int main()
{
    int n[5];
    std::cout<<"\nEnter 5 numbers:";
    for(int i=0;i<5;i++)
    {
        std::cin>>n[i];
    }
    std::cout<<"\nReverse of the number is=";
    for(int i=4;i>=0;i--)
    {
        std::cout<<"\n"<<n[i];
    }
}