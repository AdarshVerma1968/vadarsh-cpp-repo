#include<iostream>
int main()
{
    char n[15];
    float ft,ct;
    std::cout<<"Enter the metro city name:";
    std::cin>>n;
    std::cout<<"\nEnter Fahrenheit temp:";
    std::cin>>ft;
    ct=(ft-32)*5/9;
    std::cout<<"\nMetro city name is="<<n;
    if(ct<35)
    {
        std::cout<<"\nCool day";
    }
    else if(ct>35)
    {
        std::cout<<"\nHot day";
    }
}