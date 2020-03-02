#include <stdio.h>
int inp_arr[10], n;

void TakeInput ()
{

  int i;
  printf ("Enter the number of elements you want to sort: ");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
    {
      printf ("Enter the element no. %d: ", i);
      scanf ("%d", &inp_arr[i]);
    }
}

void InsertionSort ()
{
  int i, j, key;

  for (j = 2; j <= n; j++)	// j is the index of the element that needs to be put correctly
    {
      key = inp_arr[j];		//key is the element that needs to be placed in the correct position
      i = j - 1;
      while (i > 0 && inp_arr[i] > key)	//i ranges for the sorted array of index 1...(j-1)
	{
	  inp_arr[i + 1] = inp_arr[i];	//Shifting the position to make place for key
	  i = i - 1;

	}
      inp_arr[i + 1] = key;	//Found the place of key

    }
}

void PrintOutput ()
{
  int i;
  for (i = 1; i <= n; i++)
    {
      printf ("%d ", inp_arr[i]);
    }
}


int main ()
{
  TakeInput ();
  InsertionSort ();
  PrintOutput ();

  return 0;
}
