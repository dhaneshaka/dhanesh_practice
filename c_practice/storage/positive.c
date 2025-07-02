#include<stdio.h>
int main() {
	int n;
	printf("entere a number: ");
	scanf("%d",&n);
if(n>0){
	printf("%d is positive number.\n",n);
}
else if(n<0){
	printf("%d is negitive number.\n",n);
}
else{
	printf("the number is zero.\n");
}
return 0;
}
