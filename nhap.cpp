

#include <iostream>
using namespace std;
int tinh(int n){
	int a,b;
	int c=n;
    int max =0;
	int count =0;
	if (n>0 && n<10000)
	{
	while (n>0)
	{
		a = n%10;
		if (max <= a)
		{
			max = a;
		}
		n=n/10;
		
	}
	cout<<max<<" ";
	while (c>0)
	{
			b = c %10;
			if (b == max)
			{
				count++;
			}
		c=c/10;
	}
	cout<<count;
	return max;
	}else
	{
		cout<<"N";
	}
	
	
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	tinh(n);
	return 0;
}