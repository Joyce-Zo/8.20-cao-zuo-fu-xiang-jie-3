#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

  д���ı��ʽ�����ͨ��������������ȷ��Ψһ�ļ���·����������ʽ��������

  a* b + c * d + e * f;
	*  �� + ��ִ��˳�򲻶�
 ���� a*b c*d a*b+c*d  e*f a*b+c*d+e*f
 �� a*b c*d e*f a*b+c*d a*b+c*d+e*f

  c+ --c;
 + ��ߵ�cֵ�Ļ�ȡ������ --c �ĺ����ǰ�棬����Ԥ��

 �Ƿ����ʽ - ��ͬ�������в�ͬ��
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
	int answer; //  �޷�ȷ���ĸ�fun()�ȵ���
	answer = fun() - fun() * fun();// ���� 2 - 3*4
	printf("%d\n", answer);		   // ���� 4 - 2*3
	return 0;
}

int main()
{
	int i = 1;
	int a = (++i) + (++i) + (++i);
	printf("%d\n", a);//  ��һ�� + ִ��ʱ������� ++ ��ȷ���Ƿ�ִ��
	return 0;
}