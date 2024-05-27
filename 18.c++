#include<iostream>
int main()
{
    char n[15];
    int age;
    std::cout<<"Enter name=";
    std::cin>>n;
    std::cout<<"\nEnter age=";
    std::cin>>age;
    std::cout<<"\nName is :"<<n;
    if(age<5)
    {
        std::cout<<"\nChild";
    }
    else if(age>5 && age<18)
    {
        std::cout<<"\nTeenager";
    }
    else if(age>=18 && age<=30)
    {
        std::cout<<"\nYoung";
    }
    else if(age>30)
    {
        std::cout<<"\nOld";
    }
}