#include<iostream>
using namespace std;

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=2*n-1;i++)
    {
        int star=i;
        if(i>n)
        {
            star=2*n-i;
        }
        for(int j=0;j<star;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}
int main()
{
    int n;
    n=3;
    nStarTriangle(n);
    std::cin.get();
}