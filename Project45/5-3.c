//#include<stdio.h>
//int main()
//{
//	printf("hello");
//	return 0;
//}
//�ж�һ�����ǲ��ǻ�����
//�κ�һ��������10���������Ǹ������һλ���κ�һ��������10���̾����ų������һλ�������
//���� ��һ����1234 �Ϳ���ͨ�����ַ����õ� 123 �� 4���������� 123 ����ͬ���Ĳ������͵õ� 12 �� 3���������õ� 1 �� 2�����ŵõ� 0 �� 1��
//���������Ǹ�ѭ�������̲��� 0 ��ʱ���һֱ��ˣ�ÿ���õ�һ����������������������������=����*10+������
//���Ծ����Ĵ�ѭ�������ǵõ����� 4321 ������ǻ��ģ���ô����Ӧ�õ���ԭ��������˵�����ǻ��ġ�
//#include<stdio.h>
//int main()
//{
//	int sum, x, y = 0;
//	printf("����һ����:");
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
//��ŵ��
//#include<stdio.h>
//void move(char x, char y)//��a�������ƶ���b����
//{
//	printf("%c-->%c\n", x, y);
//}
//void hnt(int n, char one, char two, char three)//��n�����ӽ���b���ƶ���c������
//{
//	if (n == 1)
//	{
//		move(one, three);
//	}
//	else
//	{
//		hnt(n - 1, one, three, two);//��a��n-1�������ƶ���b������
//		move(one, three);//��aʣ�µ�1���������Ƶ�c
//		hnt (n - 1, two, one,three);//��b�ϵ�n-1�������ƶ���c����
//	}
//}
//int main()
//{
//	int n;
//	printf("���������ӵ�����:");
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
//    printf("Input the number of diskes��");
//    scanf("%d", &n);
//    printf("\n");
//    counter = hanoi(n, 'A', 'B', 'C');
//    return 0;
//}
//
//// ����1 2 3 4 5 �ܹ�������֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ����
////���ظ�����
//#include<stdio.h>
//int main()
//{
//	int i, j, k;//����٣�ʮ����
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
////�ַ���ת
////����abc��תΪcba
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
//�žų˷���
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
// ����һ��С�õĳ�������һ���£���һ���¿ɳ��ɳ��ã���ô���ÿ�Գ���ÿ���¶�������һ��С�ã�
//һ��������С�ôӵڶ�������Ϳ�ʼ�����ӣ����ʴ�һ�����ӿ�ʼ��ֳ��һ���Ժ���ж��ٶ����ӣ������������⡣
//�ο��𰸣������⣬���ӵķ�ֳ�����ͼ��ʾ��ͼ��ʵ�߱�ʾ�������ǳ��û���С�ó��ɳ��ã����߱�ʾ������С�á�
// �۲������ͼ�ɷ������¹��ɣ�
//
//��1��ÿ��С�ö��� = �ϸ��³��ö�����
//
//��2��ÿ�³��ö��� = �ϸ��³��ö��� + �ϸ���С�ö�����
//f1=1;
// f2=1
// fn=f(n-1)+f(n-2)
//�ۺϣ�1���ͣ�2���У�ÿ�³��ö��� = ǰ�����³��ö���֮�͡�
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
//		printf("%d ", array[i]);//�ݹ����
//	}
//	/*sum = array[12];
//	printf("%d \n", sum);*/
//	return 0;
////}
////�ж�0-200֮�������
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
//ˮ�ɻ���==ÿ������������
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