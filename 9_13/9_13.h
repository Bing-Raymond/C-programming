#ifndef ARRAY_BASED_SORTING_FUNCTION
#define ARRAY_BASED_SORTING_FUNCTION
/*
交换排序：
  气泡排序函数模板
*/

// 
template <class T>
void Swap(T& x, T& y)
{
  T temp;
  temp = x;
  x = y;
  y = temp;
}

//
template <class T>
void BubbleSort(T A[], int n)
{
  int i, j;
  int lastExchangeIndex;
  i = n - 1;
  while (i > 0)
  {
    lastExchangeIndex = 0;
    for (j = 0; j < i; j++)
    {
      if (A[j + 1] < A[j])
      {
        Swap(A[j], A[j + 1]);
        lastExchangeIndex = j;
      }
    }
    i = lastExchangeIndex;  }
}
#endif // !ARRAY_BASED_SORTING_FUNCTION