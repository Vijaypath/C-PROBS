#include <iostream>
#include <algorithm>
using namespace std;

int main() {
//	cout<<"GfG!";

int n;
cin>>n;
int a[1000];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
int sum;
cin>>sum;
for(int i=0;i<n-1;i++)
{
	for(int j=i+1;j<n;j++)
	//int strt=i+1;
	if(a[i]+a[j]==sum)
		cout<<min(a[i],a[j])<<" "<<max(a[i],a[j])<<endl;
}
return 0;
}
