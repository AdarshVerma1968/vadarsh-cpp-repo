#include<iostream>
int main()
{
    int n=1,m,res;
    std::cout<<"Enter  the number:";
    std::cin>>m;
    while(n<=10)
    {
        res=m*n;
        std::cout<<"\nTable is="<<res;
        n++;
    }
    return 0;
}