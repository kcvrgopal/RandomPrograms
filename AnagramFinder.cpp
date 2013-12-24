#include <iostream>
using namespace std;
int main()
{
	string s1,s2;
	int c=0;
	cout<<"Enter the First Word"<<endl;
	cin>>s1;
	cout<<"Enter the Second word"<<endl;
	cin>>s2;
	cout<<"Processing..."<<endl;
	for(int i=0;i<s1.size();i++)
	{
		for(int j=0;j<s2.size();j++)
		{
			if(s1[i]==s2[j])
			{
				c++;
			}
		}
	}
	if(c!=s1.size())
	{
		cout<<s1<<" and "<<s2<<" are not Anagrams"<<endl;
	}
	else
	{
		cout<<s1<<" and "<<s2<<" are Anagrams"<<endl;
	}
	return 0;
}