#include<iostream>
int main()
{
    int a,b,c,tmrk,avgmrk;
    char n[15];
    std::cout<<"Enter the name:";
    std::cin>>n;
    std::cout<<"\nEnter the 1st subject marks:";
    std::cin>>a;
    std::cout<<"\nEnter the 2nd subject marks:";
    std::cin>>b;
    std::cout<<"\nEnter the 3rd subject marks:";
    std::cin>>c;
    tmrk=a+b+c;
    avgmrk=(a+b+c)/3;
    std::cout<<"Student name is:"<<n;
    std::cout<<"\nTotal marks="<<tmrk;
    std::cout<<"\nAverage marks="<<avgmrk;
}