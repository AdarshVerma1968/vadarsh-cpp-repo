#include<iostream>
int main()
{
    char n[15];
    int bs,da,hra;
    std::cout<<"Enter the Employee name:";
    std::cin>>n;
    std::cout<<"\nEnter the basic salary:";
    std::cin>>bs;
    std::cout<<"\nEmployee name is:"<<n;
    if(bs>=3000)
    {
        da=(bs*10)/100;
        hra=(bs*5)/100;
        bs=bs+da+hra;
        std::cout<<"\nSalary is="<<bs;
    }
    else
    {
        
        da=(bs*20)/100;
        hra=(bs*10)/100;
        bs=bs+da+hra;
        std::cout<<"\nSalary is="<<bs;
    }
}