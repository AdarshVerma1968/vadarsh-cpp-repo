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
        r=r+t;
    }
    if(r==10)
    {
        std::cout<<"Inputted number is Magic number";
    }
    else
    {
        std::cout<<"Inputted number is not Magic number";
    }
}