/*
≤Â»Î≈≈–Ú
*/
#ifndef ARRAY_BASED_SORTING_FUNCTIONS
#define ARRAY_BASED_SORTING_FUNCTIONS

template <class T>
void InsertionSort(T A[], int n)
{
  int i, j;
  T temp;
  for (i = 1; i < n; i++)
  {
    j = i;
    temp = A[i];
    while (j>0&temp<A[j-1])
    {
      A[j] = A[j - 1];
      j--;
    }
    A[j] = temp;
  }
}
#endif // !ARRAY_BASED_SORTING_FUNCTIONS