/******************************************************************************
Selection Sort CLRS Exercise 2.2.2
*******************************************************************************/

#include <stdio.h>

int inp_arr[100], n;


void PrintOutput()
{
int i;
for(i=1;i<=n;i++)
{
    printf("%d ",inp_arr[i]);
}
}

void SelectionSort()
{
    int i,j,temp,min,min_index;
    for(i=1;i<n;i++)
    {
        //Find the minimum element
        min_index = i;
        for(j=i+1;j<=n;j++)
        {
            if(inp_arr[min_index]>inp_arr[j])
            {
         
         min_index = j;
            }
        }
        //Swap with the minimum element
        temp = inp_arr[i];
        inp_arr[i]=inp_arr[min_index];
        inp_arr[min_index]=temp;
    }

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

}


int main()
{
TakeInput();
SelectionSort();
PrintOutput();
return 0;
    
}
