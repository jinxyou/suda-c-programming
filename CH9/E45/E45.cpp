#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode* next;
};

struct ListNode* createlist();
struct ListNode* deleteeven(struct ListNode* head);
void printlist(struct ListNode* head)
{
    struct ListNode* p = head;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode* head;

    head = createlist();
    head = deleteeven(head);
    printlist(head);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode* createlist()
{
    struct ListNode* head, * tail, * temp;      // 头节点、尾节点、临时节点

    // 为头节点分配内存，头节点不存储信息
    head = (struct ListNode*)malloc(sizeof(struct ListNode));
    // 头节点指向空
    head->next = NULL;
    // 此时头、尾节点相同
    tail = head;

    int data;
    printf("输入节点名，输入-1结束：");
    scanf("%d", &data);

    while (data != -1)
    {
        // 为临时节点分配内存
        temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        // 临时节点指向空
        temp->next = NULL;
        // 存入数据
        temp->data = data;

        // 将临时节点连接到链表尾
        tail->next = temp;
        // 更新尾节点
        tail = temp;

        scanf("%d", &data);
    }

    return head;
}

struct ListNode* deleteeven(struct ListNode* head)
{
    struct ListNode* current = head;   // 当前节点

    // 链表为空
    if (!head)
    {
        return NULL;
    }

    // 由于头节点不存储数据，故需从head->next开始遍历链表
    while (current->next)
    {
        // 偶数节点，需要删除
        if (current->next->data % 2 == 0)
        {
            // 临时节点，保存当前节点(current->next)
            struct ListNode* temp = current->next;
            // 当前节点的下个节点的地址覆盖当前节点的地址
            current->next = temp->next;
            // 释放当前节点
            free(temp);
        }
        else
        {
            current = current->next;
        }
    }

    // 头节点不存储值
    head = head->next;

    return head;
}
