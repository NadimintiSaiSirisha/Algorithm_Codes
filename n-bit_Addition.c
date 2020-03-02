#include<stdio.h>

int main()
{
    
    int a[10], b[10], c[11], carry[11], n,i;
    //Array A and B have indices 1 to n
    //Array C has index 0 to n
    printf("Enter the number of bits: ");
    scanf("%d",&n);
    printf("Enter the bits of Array A seperated by a space ");
    for (i=1;i<=n;i++)
{
    scanf("%d", &a[i]);
}
printf("Enter the bits of Array B seperated by a space");
    for (i=1;i<=n;i++)
{
    scanf("%d", &b[i]);
}
carry[n]=0;
for(i=n;i>=1;i--)
{
    c[i]=a[i]^b[i]^carry[i];
    carry[i-1]=(a[i]&&b[i]) || (carry[i]&&(a[i]^b[i]));
}
c[0]=carry[0];

printf("Solution: ");
for (i=0;i<=n;i++)
{
    printf("%d", c[i]);
}


 
 return 0;   
}