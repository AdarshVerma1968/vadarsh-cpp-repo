#include<iostream>
int main()
{
    int n[5];
    int sum=0;
    std::cout<<"\nEnter 5 numbers=";
    for(int i=0;i<5;i++)
    {
        std::cin>>n[i];
    }
    for(int i=0;i<5;i++)
    {
        sum+=n[i];
    }
    std::cout<<"\n"<<sum;
}