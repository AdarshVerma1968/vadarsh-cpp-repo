#include<iostream>
int main()
{
    int n,year,month,day;
    std::cout<<"Enter the number:";
    std::cin>>n;
    year=n/365;
    month=n/30;
    std::cout<<"Year is="<<year;
    std::cout<<"\nMonth is="<<month;
    std::cout<<"\nDay is="<<n;
}