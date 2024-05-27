#include<iostream>
int main()
{
    char ch;
    std::cout<<"Enter the character:";
    std::cin>>ch;
    if(ch>='a' && ch<='z')
    {
        ch=ch-32;
        std::cout<<"Upper case is:"<<ch;
    }
    else if(ch>='A' && ch<='Z')
    {
        ch=ch+32;
        std::cout<<"Lower case is:"<<ch;
    }
}