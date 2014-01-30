#include <iostream>
using namespace std;
bool isPrime(int n)
{
	int c=0;
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			c++;
			break;
		}
	}
	if(c>0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int nthPrime(int n)
{
	int c=0,num=0;
	for(int i=2;i<100*n;i++)
	{
		if(isPrime(i))
		{
			if(c==n)
			{
				num=i;
				break;
			}
			c++;
			
		}
	}
	return num;
}
int main()
{
	cout<<nthPrime(10001);
	return 0;
}