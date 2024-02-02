#ifndef SEARCH_ETHODS
#define SEARCH_ETHODS
/*
  �۰����
  �����һ����Ԫ�ء��������򡱵������н��в��ң����Բ����۰���ҷ�����
  ˼�룺�����Ѿ����ؼ�����������У�����һ�αȽϣ��ɽ����зָ�������֣�Ȼ��ּ���п��ܰ�������Ԫ�ص�һ�����м������ң���������̽��������ָ
  ����С���ҷ�Χ��ֱ���ҵ����Ҳ���Ϊֹ��
*/

template <class T>
int BinSearch(T list[], int n, T key)
{
  int mid, low, high;
  T midvalue;
  low = 0;
  high = n - 1;
  while (low <= high)                     // low <= high ��ʾ����������δ������
  {
    mid = (low + high) / 2;               // ���м�Ԫ�ص��±�
    midvalue = list[mid];                 // ȡ���м�Ԫ�ص�ֵ
    if (key == midvalue)
      return mid;                         // ���ҵ������±�
    else if (key < midvalue)
      high = mid - 1;                     // ��key< midvalue �����ҷ�Χ��С�������ǰһ��
    else
      low = mid + 1;                      // ���򽫲��ҷ�Χ��С������ĺ�һ��
  }
  return -1;                              // û���ҵ����� -1
}
#endif // !SEARCH_ETHODS