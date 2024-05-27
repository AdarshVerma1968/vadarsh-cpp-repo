#include<iostream>
int main()
{
    char n[15];
    int a,b,c,avgmrk;
    std::cout<<"Enter the student name:";
    std::cin>>n;
    std::cout<<"\nEnter the 1st subject marks:";
    std::cin>>a;
    std::cout<<"\nEnter the 2nd subject marks:";
    std::cin>>b;
    std::cout<<"\nEnter the 3rd subject marks:";
    std::cin>>c;
    avgmrk=(a+b+c)/3;
    std::cout<<"\nName of student: "<<n;
    if(avgmrk>=60)
    {
        std::cout<<"\n1st Division";
    }
    else if(avgmrk>=45 && avgmrk<=60)
    {
        std::cout<<"\n2nd Division";
    }
    else if(avgmrk>=30 && avgmrk<=45)
    {
        std::cout<<"\n3rd Division";
    }
    else
    {
        std::cout<<"\nFail";
    }
}