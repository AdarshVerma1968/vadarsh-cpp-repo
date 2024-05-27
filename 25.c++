#include<iostream>
int main()
{
    char n;
    std::cout<<"Enter the character:";
    std::cin>>n;
    if(n>='A' && n<='Z')
    {
        std::cout<<"Inputted character is in upper case";
    }
    else if(n>='a' && n<='z')
    {
        std::cout<<"Inputted character is in lower case";
    }
    else 
    {
        std::cout<<"Inputted character is not alphabet";
    }
}