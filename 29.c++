#include<iostream>
int main()
{
    char ch;
    int x,y,res;
    std::cout<<"Enter 1st number:";
    std::cin>>x;
    std::cout<<"\nEnter 2nd number:";
    std::cin>>y;
    std::cout<<"\nEnter arithmetic operator(+,-,*,/,%):";
    fflush(stdin);
    std::cin>>ch;
    switch(ch)
    {
        case '+':
        res=x+y;
        std::cout<<"Result is="<<res;
        break;
        case '-':
        res=x-y;
        std::cout<<"Result is="<<res;
        break;
        case '*':
        res=x*y;
        std::cout<<"Result is="<<res;
        break;
        case '/':
        res=x/y;
        std::cout<<"Result is="<<res;
        break;
        case '%':
        res=x%y;
        std::cout<<"Result is="<<res;
        break;
        default:
        std::cout<<"Invalid arithmetic operator";
    }
    return 0;
}