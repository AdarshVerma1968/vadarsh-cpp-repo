#include<iostream>
int main()
{
    int i=1,sum=0;
    while(i<=100)
    {
        std::cout<<"\nsum from 1 to 100 is="<<sum;
        sum+=i;
        i++;
    }
    return 0;
}