#include <stdio.h>
#include<conio.h>
int main()
{

	int n,i,temp,j;

	scanf("%d",&n);

	int a[n];

	for(i=0;i<n;i++)

	{

		scanf("%d",&a[i]);

	}

	for(i=0;i<n;i++)

	{

			printf("%d\t%d\n",a[i],i);
			

		}
	
	return 0;
  getch();

}
