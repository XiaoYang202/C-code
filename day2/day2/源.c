#pragma warning(once:4996)//仅显示一个
#include <stdio.h>

int main()
{
	//计算2个数的和
	int num1= 0;
	int num2= 0;
	int sum= 0;
	//输入数据-使用输入函数scanf
	scanf("%d%d", &num1, &num2);//取地址符号&
	//int sum = 0;
	//C语言语法规定，变量要定义在当前代码块的最前面
	sum= num1 + num2;
	printf("sum=%d\n", sum);
	return 0;

}

//int a = 100;
//
//int main()
//{
//	int a = 10;//局部变量和全局变量的名字建议不要相同，容易产生bug
//	//当局部变量和全局变量的名字相同时，局部变量优先
//	printf("%d\n", a);
//	return 0;
//}




//int num2 = 20;//全局变量-定义在{}之外的变量
//
//int main()
//{
//	int num1 = 10;//局部变量-定义在{}之内的变量
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char));//1            1个字节对应1个比特位---2^4-1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4或者8
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));	//8
//	
//	
//	//char ch = 'A';//内存
//	//printf("%c\n", ch);//%c--打印字符格式的数据
//	//short int--短整型
//	// int-整形
//	//22
//	//int age = 22;
//	//printf("%d\n", age);//打印整形上的十进制数据
//	 
//	return 0;
//}