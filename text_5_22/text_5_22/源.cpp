#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	2.//const--常属性
//	const int num = 4;//const修饰的常变量为num,num是变量，但是又有常属性
//	//int num = 4;
//	printf("%d\n", num);
//	//num = 8;
//	printf("%d\n", num);
//	//字面常量
//	//3;
//	return 0;
//}



////3.#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX];
//	printf("%d\n", MAX);
//	return 0;
//}


//4.枚举常量
//枚举——列举
//三原色：红、绿、蓝

//枚举关键-enum

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET-枚举常量
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n",SECRET);//2
//	return 0;
//}

//字符串就是一串字符--用双引号括起来的一串字符
//
//int main()
//{//字符串在结尾的位置隐藏了一个\0的字符
//	//char arr[]="hello";
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};//字符串的结束标志很重要
//	//打印字符串
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//
//
//	return 0;
//}

int main()
{
	printf("%c\n", \130'');//斜杠后跟三个数，就是把八进制的这个数转换成十进制之后对应的ASCII码值
	//X---ASCII码值是88 

	return 0;

}

