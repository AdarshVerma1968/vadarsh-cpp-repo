#include<iostream>
int main()
{
    int n;
    char m;
    std::cout<<"Enter any number(0 to 255):";
    std::cin>>n;
    if(n>=0 && n<=255)
    {
        m=n;
        std::cout<<"ASCII character is="<<m;
    }
    else
    {
        std::cout<<"Invalid Number";
    }
}