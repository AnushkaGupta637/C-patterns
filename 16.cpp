#include<iostream>
using namespace std;

void alphaRamp(int n) {
    // Write your code here.
    int num=65;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<char(num)<<" ";
        }
        num=num+1;
        cout<<endl;
    }
}
int main()
{
    int n;
    n=3;
    alphaRamp(n);
    std::cin.get();
}