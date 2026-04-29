/*#include<stdio.h>

int main()
{
	int a=10;

	int *p=&a;

	int **f=&p;

	printf("%d",**f);
	return 0;
}
*/

#include <stdio.h>
int main()
{
    int x = 10;
    int *p = &x;
    int **q = &p;

    printf("%d", **q);
}

