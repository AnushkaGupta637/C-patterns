#include<iostream>
using namespace std;

void triangle(int n) {
	// Write your code here
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
int main()
{
    int n;
    n=3;
    triangle(n);
    std::cin.get();
}