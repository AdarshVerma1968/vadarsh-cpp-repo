#include<iostream>
int main()
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            std::cout<<""<<k;
            k++;
        }
        std::cout<<"\n";
    }
}