#ifndef SEARCH_METHODS
#define SEARCH_METHODS
/*
顺序查找。
从数组的首元素开始，逐个元素与待查找的关键字进行比较，直到找到相等的。
找到返回index，否则返回 -1。
*/

template <class T>
int SeqSearch(T list[], int n, T key)
{
  for (int i = 0; i < n; i++)
  {
    if (list[i] == key)
      return i;
  }
  return -1;
}
#endif // !SEARCH_METHODS