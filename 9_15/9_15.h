#ifndef SEARCH_ETHODS
#define SEARCH_ETHODS
/*
  折半查找
  如果是一个在元素“排列有序”的数组中进行查找，可以采用折半查找方法。
  思想：对于已经按关键字排序的序列，经过一次比较，可将序列分割成两部分，然后旨在有可能包含待查元素的一部分中继续查找，并根据试探结果继续分割，
  逐步缩小查找范围，直至找到或找不到为止。
*/

template <class T>
int BinSearch(T list[], int n, T key)
{
  int mid, low, high;
  T midvalue;
  low = 0;
  high = n - 1;
  while (low <= high)                     // low <= high 表示整个数组尚未查找完
  {
    mid = (low + high) / 2;               // 求中间元素的下标
    midvalue = list[mid];                 // 取出中间元素的值
    if (key == midvalue)
      return mid;                         // 若找到返回下标
    else if (key < midvalue)
      high = mid - 1;                     // 若key< midvalue 将查找范围缩小到数组的前一半
    else
      low = mid + 1;                      // 否则将查找范围缩小到数组的后一半
  }
  return -1;                              // 没有找到返回 -1
}
#endif // !SEARCH_ETHODS