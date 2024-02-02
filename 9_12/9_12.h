#ifndef ARRAY_BASED_SORTING_FUNCTION
#define ARRAY_BASED_SORTING_FUNCTION

/*
  直接选择排序函数模板
*/

template <class T>
void Swap(T& x, T& y)
{
  T temp;
  temp = x;
  x = y;
  y = temp;
}

template <class T>
void SelectionSort(T A[], int n)
{
  int smallIndex;
  int i, j;
  for (i = 0; i < n - 1; i++)
  {
    smallIndex = i;
    for (j = i + 1; j < n; j++)
    {
      if (A[j] < A[smallIndex])
        smallIndex = j;
    }
    Swap(A[i], A[smallIndex]);
  }
}
#endif