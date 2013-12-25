#include <iostream>
#include <string.h>
using namespace std;
bool compare(string s1, string s2)
{
	int c=0;
	for(int i=0;i<s1.size();i++)
	{
		for(int j=0;j<s1.size();j++)
		{
			if(s1[i]==s2[j])
			{
				c++;
				break;
			}
		}
	}
	if(c==s1.size())
	{
		return true;
	}
	else
	{
		return false;
	}
}
void findAnagram(string s1, string s2)
{
	int c=0;
	int pos=0;
	char *p;
	int s=s1.size();
	char temp[s];	
	for(int i=0;i<s1.size();i++)
	{
		for(int j=0;j<s2.size();j++)
		{
			
			if(s1[i]==s2[j])
			{
				if(pos>j)
				{
					//skip=false;
					continue;
					
				}
				else
				{
					//cout<<i<<endl;
					for(int k=0;k<s;k++)
					{
						if(strrchr(temp,s2[j])>0)
						{
							p=strrchr(temp,s2[j]);
							pos=p-temp;
						}
					}
					temp[i]=s2[j];
					break;
				}
			}
		}
	}
	//cout<<temp<<endl;
	//cout<<strlen(temp);
	if(compare(s1,temp))
	{
		cout<<s1<<" and "<<s2<<" are Anagrams"<<endl;
	}
	else
	{
		cout<<s1<<" and "<<s2<<" are not Anagrams"<<endl;
	}
}
int main()
{
	string s1,s2;
	char ch;
	do
	{
		cout<<"Enter the First Word"<<endl;
		cin>>s1;
		cout<<"Enter the Second word"<<endl;
		cin>>s2;
		cout<<"Processing..."<<endl;
		findAnagram(s1,s2);
		cout<<"Want to try again? Y or N"<<endl;
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	return 0;
}