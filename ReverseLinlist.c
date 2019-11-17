typedef struct Node *PtrToNode;
struct Node {
    ElementType Data; /* 存储结点数据 */
    PtrToNode   Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

List Reverse(List L)
{
    List Temp,Prev;
    Prev=NULL;
    while(L)
    {
        Temp=L->Next;
        L->Next=Prev;
        Prev=L;
        L=Temp;
    }
    return Prev;
}
