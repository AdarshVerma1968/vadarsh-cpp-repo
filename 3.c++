#include<iostream>
int main()
{
    float a,b,sum,sub,mult,div,mod;
    int x,y;
    std::cout<<"Enter the 1st number:";
    std::cin>>a;
    std::cout<<"\nEnter the 2nd number:";
    std::cin>>b;
    sum=a+b;
    sub=a-b;
    mult=a*b;
    div=a/b;
    x=a;
    y=b;
    mod=x%y;
    std::cout<<"Sum of the num="<<sum;
    std::cout<<"\nSub of the num="<<sub;
    std::cout<<"\nMult of the num="<<mult;
    std::cout<<"\nDiv of the num="<<div;
    std::cout<<"\nMod of the num="<<mod;
}