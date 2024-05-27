#include<iostream>
int main()
{
    char n[15];
    int pc,st,lt;
    std::cout<<"Enter the item name:";
    std::cin>>n;
    std::cout<<"\nEnter the product cost=";
    std::cin>>pc;
    st=(pc*10)/100;
    lt=(pc*5)/100;
    pc=pc+st+lt;
    std::cout<<"Item name="<<n;
    std::cout<<"\nSale cost of item="<<pc;
}