#ifndef SEARCH_METHODS
#define SEARCH_METHODS
/*
˳����ҡ�
���������Ԫ�ؿ�ʼ�����Ԫ��������ҵĹؼ��ֽ��бȽϣ�ֱ���ҵ���ȵġ�
�ҵ�����index�����򷵻� -1��
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