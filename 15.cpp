#include<iostream>
using namespace std;

// void nLetterTriangle(int n) {
//     // Write your code here.
//     for(int i=n;i>=1;i--)
//     {
//         for(char j='A';j<i+'A';j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=n;i>=1;i--)
    {
        int num=65;
        for(int j=0;j<i;j++)
        {
            cout<<char(num)<<" ";
            num=num+1;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    n=3;
    nLetterTriangle(n);
    std::cin.get();
}