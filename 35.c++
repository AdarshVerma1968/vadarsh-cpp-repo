#include<iostream>
int main()
{
    int x=2,y=1,res;
    while(x<=20)
    {
        while(y<=10)
        {
            res=x*y;
            std::cout<<"\nTable is="<<res;
            y++;
        }
        x++;
        y=1;
        std::cout<<"\n";
    }
    return 0;
}