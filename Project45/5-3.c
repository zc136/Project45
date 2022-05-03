//#include<stdio.h>
//int main()
//{
//	printf("hello");
//	return 0;
//}
//判断一个数是不是回文数
//任何一个数除以10的余数就是该数最后一位；任何一个数除以10的商就是排除掉最后一位后的数；
//所以 ，一个数1234 就可以通过这种方法得到 123 和 4；接下来对 123 进行同样的操作，就得到 12 和 3；接下来得到 1 和 2；接着得到 0 和 1；
//整个过程是个循环，当商不是 0 的时候就一直如此；每次拿到一个余数，都用来构造新数，新数=新数*10+余数；
//所以经过四次循环后，我们得到新数 4321 ，如果是回文，那么新数应该等于原数，否则，说明不是回文。
//#include<stdio.h>
//int main()
//{
//	int sum, x, y = 0;
//	printf("输入一个数:");
//	scanf("%d", &sum);
//	x = sum;
//	while (x > 0)
//	{
//		y = y * 10 + x % 10;
//		x = x / 10;
//	}
//	if (sum == y)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}
//汉诺塔
//#include<stdio.h>
//void move(char x, char y)//将a的盘子移动到b盘子
//{
//	printf("%c-->%c\n", x, y);
//}
//void hnt(int n, char one, char two, char three)//将n个盘子借助b盘移动到c盘子上
//{
//	if (n == 1)
//	{
//		move(one, three);
//	}
//	else
//	{
//		hnt(n - 1, one, three, two);//将a的n-1个盘子移动到b盘子上
//		move(one, three);//将a剩下的1个的盘子移到c
//		hnt (n - 1, two, one,three);//将b上的n-1的盘子移动到c盘上
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入盘子的数量:");
//	scanf("%d", &n);
//	printf("The step to moving %d disks:\n", n);
//	hnt('n', 'A', 'B', 'C');
//	return 0;
//}
//#include <stdio.h>
//int move(char getone, int n, char putone)
//{
//    static int k = 1;
//    printf("%2d:%3d # %c---%c\n", k, n, getone, putone);
//    if (k++ % 3 == 0)
//        printf("\n");
//        return 0;
//}
//int hanoi(int n, char x, char y, char z)
//{
//    int move(char, int, char);
//    if (n == 1)
//        move(x, 1, z);
//    else
//    {
//        hanoi(n - 1, x, z, y);
//        move(x, n, z);
//        hanoi(n - 1, y, x, z);
//    }
//    return 0;
//}
//int main()
//{
//    int hanoi(int, char, char, char);
//    int n, counter;
//    printf("Input the number of diskes：");
//    scanf("%d", &n);
//    printf("\n");
//    counter = hanoi(n, 'A', 'B', 'C');
//    return 0;
//}
//
//// 给你1 2 3 4 5 总共五个数字，能组成多少个互不相同且无重复数字的三位数？
////无重复数字
//#include<stdio.h>
//int main()
//{
//	int i, j, k;//代表百，十，个
//	int count = 0;
//		for (i =1 ; i <=5; i++) 
//		{
//			for (j = 1; j <=5; j++)
//			{
//				for (k = 1; k <=5; k++)
//				{
//					if (i != j && i != k && j != k)
//					{
//						count++;
//						printf("%d%d%d", i, j, k);
//						printf("\n");
//					}
//				}
//			}
//		}
//	printf("%d", count);
//			
//	return 0;
//}
////字符反转
////例如abc反转为cba
//#include<stdio.h>
//void lol(char* s, int size)
//{
//	int start = 0;
//	int end = size-1;
//	int tmp = 0;
//	if (size == 0 || size == 1)
//	{
//		s = s;
//	}
//	while (start < end)
//	{
//		tmp = s[start];
//		s[start] = s[end];
//		s[end] = tmp;
//		++start;
//		--end;
//	}
//}
//int main()
//{
//	int len = 0;
//	char s[100] = { 0 };
//	scanf("%s", &s);
//	len = strlen(s);
//	lol(s, len);
//	printf("%s\n %d\n", s, len);
//	return 0;
//}
//九九乘法表
//#include<stdio.h>
//int main()
//{
//	int i, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			int ret = i * j;
//			printf("%d*%d=%-2d ",i,j,ret);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 假设一对小兔的成熟期是一个月，即一个月可长成成兔，那么如果每对成兔每个月都可以生一对小兔，
//一对新生的小兔从第二个月起就开始生兔子，试问从一对兔子开始繁殖，一年以后可有多少对兔子？请编程求解该问题。
//参考答案：依题意，兔子的繁殖情况如图所示。图中实线表示成兔仍是成兔或者小兔长成成兔；虚线表示成兔生小兔。
// 观察分析此图可发现如下规律：
//
//（1）每月小兔对数 = 上个月成兔对数。
//
//（2）每月成兔对数 = 上个月成兔对数 + 上个月小兔对数。
//f1=1;
// f2=1
// fn=f(n-1)+f(n-2)
//综合（1）和（2）有：每月成兔对数 = 前两个月成兔对数之和。
//#include <stdio.h>
//int rabbit(int n)
//{
//
//	if (1 == n || 2 == n)
//		return 1;
//	else if (n >= 3)
//		return rabbit(n - 1) + rabbit(n - 2);
//	else
//		return -1;
//}
//int main()
//{
//	int i, sum = 0;
//	int array[13];
//	for (i = 1; i <= 12; i++)
//	{
//		array[i] = rabbit(i + 1);
//		printf("%d ", array[i]);//递归调用
//	}
//	/*sum = array[12];
//	printf("%d \n", sum);*/
//	return 0;
////}
////判断0-200之间的素数
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int i, j = 0;
//	for (i = 3; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >= i)
//		{
//			count++;
//			printf("%d ", i);
//			printf("%d\n", count);
//		}
//	}
//	return 0;
//}
//水仙花数==每个数的立方和
//153=1*1*1+5*5*5+3*3*3=153
#include<stdio.h>
int main()
{
	int i, x, y, z;
	for (i = 100; i < 1000; i++)
	{
		x = i % 10;
		y = i / 10 % 10;
		z = i / 100 % 10;
		if (i == x * x * x + y * y * y + z * z * z)
		{
			printf("%d ", i);
		}
	}
	return 0;
}