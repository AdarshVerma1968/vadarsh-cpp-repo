#include<iostream>
int main()
{
    int x,y,z;
    std::cout<<"Enter the 1st number:";
    std::cin>>x;
    std::cout<<"Enter the 2st number:";
    std::cin>>y;
    std::cout<<"Enter the 3rd number:";
    std::cin>>z;
    if(x>y && x>z)
    {
        std::cout<<"Greatest number is:"<<x;
    }
    else if(y>x && y>z)
    {
        std::cout<<"Greatest number is:"<<y;
    }
    else if(z>x && z>y)
    {
        std::cout<<"Greatest number is:"<<z;
    }
    else
    {
        std::cout<<"All inputted nummber are same";
    }
}