#include <stdio.h>

struct book
{
	float price;//价格
	char name[20];//名字
};
int main(void)
{
	struct book myBook={5.6,"the world is flat"};// 只能初始化的时候,使用初始化器  
	printf("book name=%s,book price=%.1f",myBook.name,myBook.price);
	return  0;
}
