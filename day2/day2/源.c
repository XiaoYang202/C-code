#pragma warning(once:4996)//����ʾһ��
#include <stdio.h>

int main()
{
	//����2�����ĺ�
	int num1= 0;
	int num2= 0;
	int sum= 0;
	//��������-ʹ�����뺯��scanf
	scanf("%d%d", &num1, &num2);//ȡ��ַ����&
	//int sum = 0;
	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	sum= num1 + num2;
	printf("sum=%d\n", sum);
	return 0;

}

//int a = 100;
//
//int main()
//{
//	int a = 10;//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ�����ײ���bug
//	//���ֲ�������ȫ�ֱ�����������ͬʱ���ֲ���������
//	printf("%d\n", a);
//	return 0;
//}




//int num2 = 20;//ȫ�ֱ���-������{}֮��ı���
//
//int main()
//{
//	int num1 = 10;//�ֲ�����-������{}֮�ڵı���
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char));//1            1���ֽڶ�Ӧ1������λ---2^4-1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4����8
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));	//8
//	
//	
//	//char ch = 'A';//�ڴ�
//	//printf("%c\n", ch);//%c--��ӡ�ַ���ʽ������
//	//short int--������
//	// int-����
//	//22
//	//int age = 22;
//	//printf("%d\n", age);//��ӡ�����ϵ�ʮ��������
//	 
//	return 0;
//}