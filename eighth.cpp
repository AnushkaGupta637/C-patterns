#include<iostream>
using namespace std;

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=n;i>0;i--)
    {
        for (int j = 0; j <= n - i - 1; j++) 
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout<<"*";
        }
        for(int j=0;j<=n-i-1;j++)
        {
            cout<<" ";
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