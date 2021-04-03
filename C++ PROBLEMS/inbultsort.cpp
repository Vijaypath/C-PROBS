#include <iostream>
#include<algorithm>
using namespace std;
bool ismirror(int a[],int b[],int n)
{
    sort(a,a+n);
    sort(b,b+n);
      for(int i=0;i<n;i++)
       for(int i=0;i<n;i++)
       
       if(a[i]==b[i])
       return 1;
       else
       return 0;


}
int main() {
    int n;
    cin>>n;
    int a[100],b[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    ismirror(a,b,n);
     
	//cout<<"GfG!";
	return 0;
}
