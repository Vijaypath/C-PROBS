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
int target;
cin>>target;
for(int i=0;i<n-2;i++)
{
    int strt=i+1,end=n-1;
    
    while(strt<end)
    {
        if(a[i]+a[strt]+a[end]==target)
        {
            cout<<a[i]<<" "<<a[strt]<<" "<<a[end]<<endl;
            if(a[strt]==a[strt+1])
            strt++;
            else if(a[end]==a[end-1])
            end--;
            else
            {
                strt++;
                end--;
            }
        }
        else if(a[i]+a[strt]+a[end]>target)
        end--;
        else
        strt++;
    }
}
return 0;
}
