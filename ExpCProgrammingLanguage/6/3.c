// 编程完成下列任务
//（1）建立一个单链表 21  3  15  27  11  18，并输出该链表；
//（2）输入序号n，查找序号为n的结点，并输出 ；
//（3）输入值x，查找值为x的结点，并输出；
//（4）插入结点: 输入序号 n和值x。在序号为n的结点后插入x，并输出该链表；
//（5）删除结点: 输入序号 n，删除序号为 n 的结点，并输出该链表。
#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Nmb)
int getint();
struct Nmb * createNmb();
void printNmb(struct Nmb * head);
int printblank();
struct Nmb * seekByXuhao(int xuhao,struct Nmb * head);
struct Nmb * seekByNumber(int Number,struct Nmb * head);
void insertNode(int xuhao,int number,struct Nmb * head);
void deleteNode(int xuhao,struct Nmb * head);

struct Nmb
{
	int number;
	int xuhao;
	struct Nmb *next;
};
int main()
{
    struct Nmb * list, * p =NULL;
    int n,x;
    list=createNmb();
    printNmb(list);
    putchar('\n');
    n=getint();
    p=seekByXuhao(n,list);
    printf("%d\n",p->number);
    x=getint();
    p=seekByNumber(x,list);
    printf("%d %d\n",p->xuhao,p->number);
    n=getint();
    x=getint();
    insertNode(n,x,list);
    printNmb(list);
    putchar('\n');
    n=getint();
    deleteNode(n,list);
    printNmb(list);
    return 0;

}

struct Nmb * createNmb()
{
    struct Nmb * head,* tail,*p = NULL;
    int number,xuhao;
    for(xuhao=1;(number=getint());xuhao++)
    {
        p=(struct Nmb *)malloc(LEN);
        // init the new node
        p->xuhao=xuhao;
        p->number=number;
        p->next=NULL;

        if(xuhao==1)
            // init head and tail
           head=tail=p;
        else
            // link the new node to tail
            tail->next=p;

        // tail move to the new tail
        tail=p;
    }
    return head;
}

void printNmb(struct Nmb * head)
{
    struct Nmb * p = NULL;
    for(p=head;p!=NULL;p=p->next) 
        printf(p==head?"%d":" %d",p->number);
}

struct Nmb * seekByXuhao(int xuhao,struct Nmb * head)
{
    struct Nmb * p=NULL;
    for(p=head;p->xuhao!=xuhao || p==NULL;p=p->next);
    // if can't find out, return NULL.
    return p;
}

struct Nmb * seekByNumber(int number,struct Nmb * head)
{
    struct Nmb * p=NULL;
    for(p=head;p->number!=number || p==NULL;p=p->next);
    // if can't find out, return NULL.
    return p;
}

void insertNode(int xuhao,int number,struct Nmb * head)
{
    struct Nmb * p,* newNode = NULL;

    //create new node
    newNode=(struct Nmb *)malloc(LEN);
    newNode->xuhao=xuhao+1;
    newNode->number=number;

    // find the location
    for(p=head;p->xuhao!=xuhao || p->next==NULL;p=p->next);

    // link into list
    newNode->next=p->next;
    p->next=newNode;

    // move back back
    for(p=newNode->next;p!=NULL;p=p->next)
        p->xuhao++;
}

void deleteNode(int xuhao,struct Nmb * head)
{
    struct Nmb * p, * node = NULL;
    // locate the node in front of what we want to delete
    for(p=head;p->next->xuhao!=xuhao || p->next->next==NULL;p=p->next);
    // point the note that will be delete
    node=p->next;
    // relink the list
    p->next=p->next->next;
    // delete the note
    free(node);
    // adjust xuhao
    for(p=p->next;p!=NULL;p=p->next)
        p->xuhao--;
}

int getint()
{
    int integer;
    scanf("%d",&integer);
    return integer;
}

