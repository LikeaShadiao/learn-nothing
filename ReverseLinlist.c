//这是List的数据类型
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data; /* 存储结点数据 */
    PtrToNode   Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

//这是实现逆置的函数
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

//这是完整代码，亲测有效
#include<stdio.h>  
#include<stdlib.h>  
typedef int ElementType;  
typedef struct Node *PtrToNode;  
struct Node {  
    ElementType Data;  
    PtrToNode Next;  
};  
typedef PtrToNode List;  
List Read();  
void Print(List L);  
List Reverse(List L);  
  
int main()  
{  
    List L1, L2;  
    L1 = Read();  
    L2 = Reverse(L1);  
    Print(L1);  
    Print(L2);  
  
    return 0;  
}  
  
/* 建立链表 */  
List Read()  
{  
    List head = NULL;  
    List current;  
    List prev = NULL;  
    int len = 0;  
    scanf("%d", &len);  
    if (len == 0)   return NULL;  
    
    while (len--)   
    {  
        current = (List)malloc(sizeof(struct Node));  
        if (head == NULL)  
            head = current;  
        else  
        prev->Next = current;  
        current->Next = NULL;  
        scanf("%d", &current->Data);  
        prev = current; 
    }  
    return head;  
} 
void Print(List L)  
{  
    List p = L;  
    List s = L;  
    List temp;  
    if (p == NULL)  
        printf("NULL");  
    else  
        printf("\n");  
    while (p!=NULL) {  
        printf("%d ", p->Data);  
        p = p->Next;  
    }  
}  
  
List Reverse( List L )  
{  
    List Temp, Prev;  
    Prev = NULL;  
    while(L)  
    {  
        Temp = L->Next;  
        L->Next = Prev;  
        Prev = L;  
        L = Temp;  
    }  
    return Prev;  
}  
//输入输出大致如下
/*
输入
5
1 2 3 4 5

输出
1
5 4 3 2 1
*/
