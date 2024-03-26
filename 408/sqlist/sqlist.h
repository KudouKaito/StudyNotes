
#define ELEMENT_TYPE char
#define MAXSIZE 20
/* 数组初始化为空，长度初始化为0，数组初始化{}是初始化成该数据类型的默认值，{0}是初始化为0 */
#define LIST_INIT(name) struct list name = { {},0 }
/* 顺序线性表，表长是固定值，不可扩展。 */
struct list {
    ELEMENT_TYPE data[MAXSIZE];
    int length;
};

/** 
 * InitList - 初始化顺序线性表
 * @L: 需要初始化的顺序线性表 
 *
 * 结果是将list的长度初始化为0，元素不用管。初始化成功返回0，如果顺序表为空则返回-1。
 */
int InitList(struct list *L);

/** 
 * Length - 求表长
 * @L: 顺序线性表 
 *
 * 返回顺序线性表的长度，即顺序线性表的元素个数。
 */
int Length(struct list *L);

/** 
 * LocateElem - 按值查找操作
 * @L: 顺序线性表 
 * @e: 关键字
 *
 * 返回给定关键字对应的元素位置，该位置从1开始。如果找不到，则返回0
 */
int LocateElem(struct list *L, ELEMENT_TYPE e);
// int LocateElemiBinarySearch(struct list *L, ELEMENT_TYPE e);

/** 
 * GetElem - 按位查找操作
 * @L: 顺序线性表 
 * @i: 元素位置，从1开始
 *
 * 取出对应位置中的元素。当L为NULL的时候可能会出问题。
 */
ELEMENT_TYPE GetElem(struct list *L, int i);

/** 
 * ListInsert - 插入操作
 * @L: 顺序线性表 
 * @i: 元素位置，从1开始
 * @e: 要插入的元素值 
 *
 * 在表中第i个位置插入元素e。
 */
int ListInsert(struct list *L, int i, ELEMENT_TYPE e);

/** 
 * ListDelete - 删除操作
 * @L: 顺序线性表 
 * @i: 元素位置，从1开始
 * @ep: 元素指针，用于存放删除的元素值 
 *
 * 删除对应位置元素，将元素值取到ep中。
 * 操作成功返回0，否则操作失败，不做任何操作
 * L为NULL返回-1，越界返回-3，表满返回-3。
 *
 */
int ListDelete(struct list *L, int i, ELEMENT_TYPE *ep);

/** 
 * PrintList - 打印顺序线性表
 * @L: 顺序线性表 
 *
 * 成功返回0，否则返回1
 */
int PrintList(struct list *L);

/** 
 * Empty - 判断是顺序表否为空
 * @L: 顺序线性表 
 *
 * 若为空表返回1, 否则返回0
 */
int Empty(struct list *L);

/** 
 * DestroyList - 销毁顺序线性表
 * @L: 顺序线性表 
 *
 * 销毁顺序顺序线性表，释放空间。
 */
int DestroyList(struct list *L);



