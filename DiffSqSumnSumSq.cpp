#include <iostream>
using namespace std;
int sqSum(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum*sum;
}
int sumSq(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i*i;
	}
	return sum;
}
int main()
{
	cout<<sumSq(100)-sqSum(100)<<endl;
	return 0;
}
