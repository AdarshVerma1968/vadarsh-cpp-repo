#include<iostream>
int main()
{
    int i=1,j=2;
    while(i<=100)
    {
        while(j<=100)
        {
            std::cout<<"\nEven number="<<j;
            j+=2;
        }
        std::cout<<"\nOdd number="<<i;
        i+=2;  
    }
}