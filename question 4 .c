#include<stdio.h>

main()
{
	int i,j,n;
	int a[100];
	printf("ENTER THE VALUE = ");
	scanf("%d",&n);
	
		for(i=0; i<n; i++)
		{
			printf("ENTER ELEMENT = ");
			scanf("%d",&a[i]);
		}
		for(i=0; i<n; i++)
		{
			if(a[i]<0)
			{
				printf("\n\n NEGATIVE ELEMENTS  = %d",a[i]);
			}

		}
}
