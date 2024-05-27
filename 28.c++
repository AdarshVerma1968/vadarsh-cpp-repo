#include<iostream>
int main()
{
    char ch;
    std::cout<<"Enter the character(a,e,i,o,u):";
    std::cin>>ch;
    ch=tolower(ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        std::cout<<"It's vowel";
        break;
        default:
        std::cout<<"It's consonant";
    }
}