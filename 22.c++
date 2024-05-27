#include<iostream>
int main()
{
    char a;
    int x,y,res;
    std::cout<<"Enter the 1st number:";
    std::cin>>x;
    std::cout<<"\nEnter the 2nd number:";
    std::cin>>y;
    std::cout<<"\nEnter the arithmetic operator(+,-,*,/,%):";
    std::cin>>a;
    if(a=='+')
    {
        res=x+y;
        std::cout<<"Result is="<<res;
    }
    else if(a=='-')
    {
        res=x-y;
        std::cout<<"Result is="<<res;
    }
    else if(a=='*')
    {
        res=x*y;
        std::cout<<"Result is="<<res;
    }
    else if(a=='/')
    {
        res=x/y;
        std::cout<<"Result is="<<res;
    }
    else if(a=='%')
    {
        res=x%y;
        std::cout<<"Result is=="<<res;
    }
    else 
    {
        std::cout<<"Invalid operator";
    }
}