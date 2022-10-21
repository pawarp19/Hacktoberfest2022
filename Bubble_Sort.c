#include<stdio.h>
void main()
{
    int a[50],n,i,j,temp;
    printf("enter the number\n");
    scanf("%d",&n);

    for(i=0;i<n;i++ )
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted list is\n");

    for(i=0;i<n;i++ )
        printf("%d\n",a[i]);

}
