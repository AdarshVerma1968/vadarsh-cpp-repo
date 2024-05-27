#include<iostream>
int main()
{
    char n[15];
    float ft,ct;
    std::cout<<"Enter the metro city name:";
    std::cin>>n;
    std::cout<<"\nEnter the fahrenheit temp:";
    std::cin>>ft;
    ct=(ft-32)*5/9;
    std::cout<<"Metro city is :"<<n;
    std::cout<<"\nCelsius Temp is="<<ct;
}