#include<iostream>
using namespace std;

void symmetry(int n) {
    // Write your code here.
    int space=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            cout<<"* ";
        }
        for(int j=0;j<space;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=n-i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        space+=2;
    }
    space = 2*n-2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int j=0;j<space;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        space-=2;
    }
}
int main()
{
    int n;
    n=3;
    symmetry(n);
    std::cin.get();
}