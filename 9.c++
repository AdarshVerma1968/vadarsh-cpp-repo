#include<iostream>
int main()
{
    int n,hr,min;
    std::cout<<"Enter the number:";
    std::cin>>n;
    hr=n/3600;
    min=n/60;
    std::cout<<"Hour is="<<hr;
    std::cout<<"\nMinute is="<<min;
    std::cout<<"\nSecond is="<<n;
}