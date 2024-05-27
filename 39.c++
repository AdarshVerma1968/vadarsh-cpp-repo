#include<iostream>
int main()
{
    int n,tdigit=0;
    std::cout<<"Enter the number:";
    std::cin>>n;
    for( ;n!=0;n=n/10)
    {
        tdigit++;
    }
    std::cout<<"Total digit of the number = "<<tdigit;
}