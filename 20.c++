#include<iostream>
int main()
{
    char n;
    std::cout<<"Enter an alphabet:";
    std::cin>>n;
    if(n=='a'|| n=='A'|| n=='e'|| n=='E'|| n=='I' || n=='i'|| n=='o' || n=='O' || n=='U' || n=='u')
    {
        std::cout<<"It's a vowel";
    }
    else 
    {
        std::cout<<"It's a consonant";
    }
}