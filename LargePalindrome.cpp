#include <iostream>
using namespace std;
bool isPali(int n)
{
	int rev=0,r;
	int o=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==o)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
int main()
{
	int max=0;
	for(int i=999;i>99;i--)
	{
		for(int j=i;j>99;j--)
		{
			if(isPali(i*j))
			{
				//cout<<i*j<<endl;
				//break;
				if(i*j>max)
				{	
					max=i*j;
				}
			}
		}
	}
	cout<<max;
	return 0;
}