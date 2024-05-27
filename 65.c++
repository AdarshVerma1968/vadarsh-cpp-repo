#include<iostream>
int main()
{
    int n[5];
    std::cout<<"\nEnter 5 numbvers:";
    for(int i=0;i<5;i++)
    {
        std::cin>>n[i];
    }
    std::cout<<"\n1st and last index values are="<<n[0]<<"and"<<n[4];
}