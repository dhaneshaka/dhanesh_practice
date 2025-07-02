#include<stdio.h>
int main()
{
	FILE *fp=fopen("data.txt","w");
	if (fp==NULL)
	{
		printf("error opening file\n");
		return 1;
	}
	fprintf(fp,"123456 \n");

	fclose(fp);

	{
		printf("data successfull written to data.txt\n");
		return 0;

	}
}

	

