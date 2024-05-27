#include<iostream>
int main()
{
    int n,t,r=0,x;
    std::cout<<"Enter the number:";
    std::cin>>n;
    x=n;
    for( ;n!=0;n=n/10)
    {
        t=n%10;
        r=r*10+t;
    }
    if(x==r)
    {
        std::cout<<"Inputted number is Palindrome";
    }
    else
    {
        std::cout<<"Inputted number is not Palindrome";
    }
}