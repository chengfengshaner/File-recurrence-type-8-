//goto语句 - C语言提供了可以随意滥用的goto语句和标记跳转的标号
//理论上goto语句是没有必要的，实践中没有goto语句也可以很容易的写出代码
//但是某些场合下goto语句还是用得到的，最常见的用法就是终止程序在某些深度嵌套的结构的处理过程，例如一次跳出两层或多层循环
//这种情况使用break是没有必要的，它只能从最内层循环退出到上一层的循环
//下面是使用goto语句的一个例子

#define _CRT_SECURE_NO_WARNINGS 01
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("hehe\n");
//
//	goto flag;//实现死循环
//	return 0;
//}

//关机程序
//1分钟内关机 - 输入来取消关机
//   -s        -t         60
//设置关机 设置时间关机 设置时间60
//   -a
//计划取消
//shutdown -s -t 60
//shutdown -a

int main()
{
	char input[20] = { 0 };//存放输入的信息
	//C语言提供了一个函数：system() - 执行系统命令

	//stdlib.h

	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：no，就取消关机\n");
	scanf("%s", input);

	//string.h

	if (strcmp(input, "no") == 0)//两个字符串比较是不能使用==的，应该使用strcmp() string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//int main()
//{
//	char input[20] = { 0 };//存放输入的信息
//	//C语言提供了一个函数：system() - 执行系统命令
//	//stdlib.h
//	system("shutdown -s -t 60");
//while(1)
//{ 
//	printf("请注意，你的电脑在1分钟内关机，如果输入：no，就取消关机\n");
//	scanf("%s", input);
//	//string.h
//	if (strcmp(input, "no") == 0)//两个字符串比较是不能使用==的，应该使用strcmp() string compare
//	{
//		system("shutdown -a");
//		break;
//	}	
//}
//return 0;
//}

//goto语句只能在一个函数范围内跳转，不能跨函数