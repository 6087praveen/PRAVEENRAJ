#include <iostream>
using namespace std;

int main() {
	int b[10],i,j,a,temp=0;
	cin>>a;

		for(i=1;i<=a;i++)
		{
			cin>>b[i];
		}
	for(i=1;i<=a;i++)
	{
		for(j=i+1;j<=a;j++)
		{
			if(b[i]<b[j]);
			{
			temp=b[i];
			b[i]=b[j];
			b[j]=temp;
		}
		}	
		
	}
	cout<<b[1]<<"\t"<<b[a];


	return 0;
}
