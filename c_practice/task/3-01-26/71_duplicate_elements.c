#include<stdio.h>

int main()
{

	int size;
	printf("enter the array size:");
	scanf("%d",&size);

	int a[size];
	int b[size];
	int i,j,count;


	printf("enter %d numbers",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<count;j++)
		{
			if(a[i]==b[j])
			{
				break;
			}
		}

		if (j == count)
        {
            b[count] = a[i];
            count++;
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < count; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
