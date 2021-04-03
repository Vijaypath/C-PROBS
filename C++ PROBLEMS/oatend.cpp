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
sort(a+n,a);
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
