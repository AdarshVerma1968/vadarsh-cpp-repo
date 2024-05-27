#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter the number(1-7):";
    std::cin>>n;
    switch(n)
    {
        case 1:
        std::cout<<"\nSunday";
        break;
        case 2:
        std::cout<<"\nMonday";
        break;
        case 3:
        std::cout<<"\nTuesday";
        break;
        case 4:
        std::cout<<"\nWednesday";
        break;
        case 5:
        std::cout<<"\nThursday";
        break;
        case 6:
        std::cout<<"\nFriday";
        break;
        case 7:
        std::cout<<"\nSaturday";
        break;
        default:
        std::cout<<"\nInvalid number";
    }
}