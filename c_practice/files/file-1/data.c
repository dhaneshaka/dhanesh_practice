#include<stdio.h>
int main()
{
	FILE *fp=fopen("data.txt1","w");
	if (fp==NULL)
	{
		printf("error opening file\n");
		return 1;
	}
	fprintf(fp,"....    ......./////...../////...///..//./../././. \n");

	fclose(fp);

	{
		printf("data successfull written to data.txt1\n");
		return 0;

	}
}

	

