#include<iostream>
using namespace std;

void nNumberTriangle(int n) {
    // Write your code here.
    int nu=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<nu<<" ";
            nu=nu+1;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    n=3;
    nNumberTriangle(n);
    std::cin.get();
}