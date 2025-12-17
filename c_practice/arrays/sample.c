#include<stdio.h>
int main()
{
    int i,j,n,count;
    
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the number f values\n");
    for(i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
            
        }
    }
    printf("the duplicate values %d",count);
    return 0;
}
