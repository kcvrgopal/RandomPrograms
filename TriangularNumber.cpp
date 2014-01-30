#include <iostream>
using namespace std;
bool numberOfFactors(int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count>500)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int triangle(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
			sum=sum+i;
	}
	return sum;
}
int main()
{
	for(int i=1;i<=10000000000;i++)
	{
		int n=triangle(i);
		if(numberOfFactors(triangle(i)))
		{
			cout<<"******"<<n;
			break;
		}
	}
}