#include <iostream>
using namespace std;
bool isPrime(long long n)
{
	int c=0;
	for(long long i=2;i<n/2;i++)
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
int main()
{
	long long max=0;
	long long n=600851475143;
	//for(long long i=n/2;i>1;i--)
	for(long long i=2;i<n/2;i++)
	{
		//cout<<i<<endl;
		if(n%i==0)
		{
			//cout<<i<<endl;
			if(isPrime(i))
			{
				cout<<"in"<<i<<endl;
				max=i;
				//break;
			}
		}
	}
	cout<<max;
	return 0;
}