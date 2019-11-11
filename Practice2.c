//给定两个整形变量的值，将两个值的内容进行交换
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int x, y, temp;
	printf("please enter 2 integer numbers:");
	scanf("%d %d", &x, &y);
	temp = x;
	x = y;
	y = temp;
	printf("the swapped value is:%d %d\n", x, y);
	system("pause");
	return 0;
}
//不允许创建临时变量，交换两个数的内容
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int x, y;
	printf("please enter 2 integer numbers:");
	scanf("%d %d", &x, &y);
	x = x^y;
	y = x^y;
	x = x^y;
	printf("the swapped value is:%d %d\n", x, y);
	system("pause");
	return 0;
}
//求10个整数中的最大值
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
int i, m, a[10];
printf("please enter 10 integer numbers:");
for (i = 0; i < 10; i++)
scanf("%d", &a[i]);
printf("\n");
for (i = 1, m = a[0]; i < 10; i++){
m = max(m, a[i]);
}
printf("the largest number is %d\n", m);
system("pause");
return 0;
}
//将三个数按从大到小输出
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int x, y, z, temp;
	printf("please enter 3 integer numbers:");
	scanf("%d %d %d", &x, &y, &z);
	if (x < y){
		temp = x;
		x = y;
		y = temp;
	}
	if (x < z){
		temp = x;
		x = z;
		z = temp;
	}
	if (y < z){
		temp = y;
		y = z;
		z = temp;
	}
	printf("the order from largest to smallest is:%d %d %d\n", x, y, z);
	system("pause");
	return 0;
}
//求两个数的最大公约数
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int m, n, r, temp;
	printf("please enter two integer number:");
	scanf("%d %d", &n, &m);
	if (n< m){
		temp = n;
		n = m;
		m = temp;
	}
	while (m != 0){
		r = n%m;
		n = m;
		m = r;
	}
	printf("the great common divisor is:%d\n", n);
	system("pause");
	return 0;
}
