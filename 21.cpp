#include<iostream>
using namespace std;

void getStarPattern(int n) {
    // Write your code here.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
            {
                cout<<"*";
            } else {
                cout << " ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    n=3;
    getStarPattern(n);
    std::cin.get();
}
