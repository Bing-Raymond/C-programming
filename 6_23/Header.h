#pragma once
// 题目：编写reverse(char* s) 的倒序递归程序，使字符串s倒序。
// 递归？那么要有终止的时候。
// 递归终止条件是什么？太短了？用长度来控制。strlen(s) 可以获得长度。
// 直接把总长度传进去，会不会有问题？似乎有问题。
// 那么传进去剩余的部分呢？

// s  t
// abcd
// s与t的内容互换！
// s ++ , t --
// 当s不小于t的时候停止。
