#include <iostream>
using namespace std;
int main()
{
	long a=1; 
	long b=2;
	long c;
	long sum=2;
	do{
		c=a+b;
		a=b;
		b=c;
		if(c%2==0)
		{
			sum=sum+c;
		}
		//cout<<c<<" and i is "<<i<<" and sum is "<<sum<<endl;
	}while(c<=4000000);
	cout<<sum;
	return 0;
}