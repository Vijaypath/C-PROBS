#include<iostream>
using namespace std;
int main()
{
	int n,tmp;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int i=0,j=n-1;
	while(i<j)
	{
		while(a[i]==0)
		{
			i++;
		}
		while(a[j]==1)
		{
			j--;
		}
		if(i<j)
		{
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
			i++;
			j--;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
