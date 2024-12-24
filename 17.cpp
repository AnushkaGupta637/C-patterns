#include<iostream>
using namespace std;

void alphaHill(int n) {
    // Write your code here.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        char num='A';
        for(int j=1;j<=2*i+1;j++)
        {
            cout<<num<<" ";
            if (j <= (2 * i + 1) / 2 ) {
              num++;
            }
            else
            {
                num--;
            }
        }
        for(int j=0;j<n-i-1;j++)
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
    alphaHill(n);
    std::cin.get();
}