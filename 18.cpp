#include<iostream>
using namespace std;

void alphaTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++)
    {
        char ch=65+n-1;
        for(char j=1;j<=i;j++)
        {
            cout<<char(ch)<<" ";
            ch=ch-1;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    n=3;
    alphaTriangle(n);
    std::cin.get();
}