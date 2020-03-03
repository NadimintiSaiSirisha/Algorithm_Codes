/******************************************************************************
Linear Search CLRS Exercise 2.1.3
*******************************************************************************/

#include <stdio.h>

int inp_arr[100];
int v;
int n;

int LinearSearch()
{
    int i;
for(i=1;i<=n;i++)
{
    if(inp_arr[i]==v)
    {
        printf("Element found in position: %d",i);
        return 0;
    }
}
    printf("NIL");
    return 0;

}

void TakeInput ()
{

  int i;
  printf ("Enter the number of elements: ");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
    {
      printf ("Enter the element no. %d: ", i);
      scanf ("%d", &inp_arr[i]);
    }
printf("Enter the element to be searched ");
    scanf("%d",&v);

int a=    LinearSearch();
    
}


int main()
{
TakeInput();
return 0;
    
}
