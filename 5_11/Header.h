#pragma once

// extern 外部的学习！
// 在一个文件中声明一个全局变量n、主函数main(), 在另一个文件中定义函数hn1（），在main（）中对n赋值，再调用fn1（），再fn1（）中也对n赋值，显示n最后的值。
// 学习：
// 主函数source里定义了全局的变量n，并想对它赋值，这个没问题。
// 但是，如果想用外部的方法fn1() 来修改这个值，那么，就可以在另一个文件里（*.h;*.cpp）使用extern int n 这个写法，来对主函数文件里的n进行赋值！
// 这样也可以做到数据共享！

extern int n;
void fn1()
{
  n = 30;
}