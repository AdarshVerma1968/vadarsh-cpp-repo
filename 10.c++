#include<iostream>
int main()
{
    int x,y,temp;
    std::cout<<"Enter the 1st num:";
    std::cin>>x;
    std::cout<<"Enter the 2nd num:";
    std::cin>>y;
    temp=x;
    x=y;
    y=temp;
    std::cout<<"After swap,1st num ="<<x;
    std::cout<<"\nAfter swap,2nd num="<<y;
}