#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
unsigned long long int power(unsigned long long int x, int i)
{
  if(i==1)
		return x;
	else
	{
		x=x*power(x,i-1);
	}
	return x;
}
int main(void)
{
	unsigned long long int a;
	int n;
	printf("Enter N(power of 10): ");
	scanf("%d",&n);
	a = power(10,n);
	char* A;
	A = malloc(sizeof(char)*a);
	unsigned long long int i,j,m,z;
	m=sqrt(a);
	A[0]=A[1]='0';
	A[2]='1';
	for(i=3;i<=a;i+=2)
	{
		A[i]='1';
		A[i+1]='0';
	}
	clock_t t = clock ();
	for(i=3;i<=m;i+=2)
	{
		if(A[i]=='1')
		{
			for(j=i;(z=j*i)<=a;j+=2)
			{
				A[z]='0';
			}
		}
	}
	t = clock () - t;
	printf (" Time taken : %f\n",( double ) t / CLOCKS_PER_SEC );
	return 0;
}
