#define _CRT_SECURE_NO_WARNINGS 1
//斐波拉契数列
//递归法
#include<iostream>
using namespace std;

long long Fib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else if (n > 1)
	{
		return Fib(n - 1) + Fib(n - 2);
	}
	//return n > 1 ? Fib(n - 1) + Fib(n - 2) : n;
}

void Test()
{
	int N = 0;
	scanf("%d", &N);
	int ret = Fib(N);
	printf("%d\n", ret);
}

int main()
{
	Test();
	system("pause");
	return 0;
}


//非递归法
#include<iostream>
using namespace std;

long long Fib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else if (n > 1)
	{
		int a = 1;
		int b = 1;
		int c = 1;
		for (int i = 2; i < n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}

void Test()
{
	int N = 0;
	scanf("%d", &N);
	int ret = Fib(N);
	printf("%d\n", ret);
}

int main()
{
	Test();
	system("pause");
	return 0;
}