#include<iostream>
using namespace std;
void seeding(int n) {
	// Write your code here.
	for(int i=n;i>0;i--)
	{
		for(int j=0;j<i;j++)
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
    seeding(n);
    std::cin.get();
}