#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

  写出的表达式必须可通过操作符的属性确定唯一的计算路径，否则表达式存在问题

  a* b + c * d + e * f;
	*  与 + 的执行顺序不定
 可能 a*b c*d a*b+c*d  e*f a*b+c*d+e*f
 或 a*b c*d e*f a*b+c*d a*b+c*d+e*f

  c+ --c;
 + 左边的c值的获取可能在 --c 的后面或前面，不可预测

 非法表达式 - 不同编译器有不同解
int main()
{
	int i = 10;
	i = i-- - --i * (i = -3) * i++ + ++i;
	printf("%d\n", i);
	return 0;
}

int fun()
{
	static int count = 1;
	return ++count; //  2  3  4
}
int main()
{
	int answer; //  无法确定哪个fun()先调用
	answer = fun() - fun() * fun();// 可能 2 - 3*4
	printf("%d\n", answer);		   // 可能 4 - 2*3
	return 0;
}

int main()
{
	int i = 1;
	int a = (++i) + (++i) + (++i);
	printf("%d\n", a);//  第一个 + 执行时，后面的 ++ 不确定是否执行
	return 0;
}