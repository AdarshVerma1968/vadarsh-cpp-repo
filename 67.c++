#include<iostream>
int main()
{
    int n[10];
    std::cout<<"\nEnter 10 numbers:";
    for(int i=0;i<10;i++)
    {
        std::cin>>n[i];
    }
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            std::cout<<"\n"<<n[i];
        }
    }
}