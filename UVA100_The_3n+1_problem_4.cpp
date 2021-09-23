/*
Sample Input
1 10
100 200
201 210
900 1000
Sample Output
1 10 20
100 200 125
201 210 89
900 1000 174
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int condition(int n, int length)
{
	if(n==1) //길이 1이면 그냥 리턴; 
	{
		return length;
	}
	else if(n%2==1)
	{
		n=(n*3)+1; //문제에 표시된 공식 사용; 
		condition(n,++length);
	}
	else if(n%2==0)
	{
		n=n/2;
		condition(n,++length);
	}
}

int main()
{
	int i,j;
	int max=0;
	while(cin>>i>>j)
	{
		cout<<i<<" "<<j<<" ";
		int max=0;
		if(i>j)
		{
			int temp;
			temp=i;
			i=j;
			j=temp;
		}		// 1 10 이아닌 10 1 같은거 첫번째가 큰걸로 썻을때 바꾸는것// 
		for(i;i<=j;i++)
		{
			int length=1;
			length=condition(i,length);
			if(max<length)
			{
				max=length;
			}	
		}
			cout<<max<<endl;
	}
}
