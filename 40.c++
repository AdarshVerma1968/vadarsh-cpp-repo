#include<iostream>
int main()
{
    int n,t,r=0;
    std::cout<<"Enter the number:";
    std::cin>>n;
    for( ;n!=0;n=n/10)
    {
        t=n%10;
        r=r*10+t;
    }
    std::cout<<"Reverse of the number is="<<r;
}