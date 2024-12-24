#include<iostream>
using namespace std;

void symmetry(int n) {
    // Write your code here.
    int space =n*2-2;
    for(int i=1;i<=2*n-1;i++)
    {
        int star1=i;
        if(i>n)
        {
            star1=2*n-i;
        }
        for(int j=0;j<star1;j++)
        {
            cout<<"* ";
        }
        if(i>n)
        {
            space+=2;
        }
        for(int j=0;j<space;j++)
        {
            cout<<" ";
        }
        space =-2;
        int star2=i;
        if(i>n)
        {
            star2=2*n-i;
        }
        for(int j=0;j<star2;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    n=3;
    symmetry(n);
    std::cin.get();
}