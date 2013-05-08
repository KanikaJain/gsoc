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
	unsigned long long int i,j,m;
	m=sqrt(a);
	A[0]=A[1]='0';
	for(i=2;i<=a;i++)
		A[i]='1';
	clock_t t = clock ();
	for(i=2;i<=a;i++)
	{
		if(A[i]=='1')
		{
			for(j=i;j*i<=a;j++)
			{
				A[j]='0';
			}
		}
	}
	t = clock () - t;
	printf (" Time taken : %f\n",( double ) t / CLOCKS_PER_SEC );
	return 0;
}
