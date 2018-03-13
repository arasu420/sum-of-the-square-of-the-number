#include <iostream>
using namespace std;
int main()
{
	int n,r,r1,sum=0;
	cout<<"Enter he number";
	cin>>n;
	while(n!=0)
	{
	    r=n%10;
	    r1=r*r;
	    n=n/10;
	    sum=sum+r1;
	}
	cout<<sum;	
	return 0;
}
