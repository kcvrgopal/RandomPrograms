#include <iostream>
#include <cstdlib>
using namespace std;
int check(int a[],int n)
{
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			if(a[j]==a[i])
			{
				cout<<"\n"<<a[j]<<" is a duplicate at index : "<<i<<" and "<<j<<"\n";
			}
		}
	}
}
int main()
{
	int n;
	cout<<"Number of elements in an array?"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	int j=rand() % 100;
	int v=(rand() % 100) + 1;
	a[j]=v;
	check(a,n);
	return 0;
}