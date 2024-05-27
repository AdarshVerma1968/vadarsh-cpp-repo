#include<iostream>
int main()
{
    char m;
    int n=1;
    while(n<=255)
    {
        m=n;
        std::cout<<"\nASCII value is="<<m;
        n++;
    }
}