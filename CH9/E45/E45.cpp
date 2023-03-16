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

/* ��Ĵ��뽫��Ƕ������ */
struct ListNode* createlist()
{
    struct ListNode* head, * tail, * temp;      // ͷ�ڵ㡢β�ڵ㡢��ʱ�ڵ�

    // Ϊͷ�ڵ�����ڴ棬ͷ�ڵ㲻�洢��Ϣ
    head = (struct ListNode*)malloc(sizeof(struct ListNode));
    // ͷ�ڵ�ָ���
    head->next = NULL;
    // ��ʱͷ��β�ڵ���ͬ
    tail = head;

    int data;
    printf("����ڵ���������-1������");
    scanf("%d", &data);

    while (data != -1)
    {
        // Ϊ��ʱ�ڵ�����ڴ�
        temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        // ��ʱ�ڵ�ָ���
        temp->next = NULL;
        // ��������
        temp->data = data;

        // ����ʱ�ڵ����ӵ�����β
        tail->next = temp;
        // ����β�ڵ�
        tail = temp;

        scanf("%d", &data);
    }

    return head;
}

struct ListNode* deleteeven(struct ListNode* head)
{
    struct ListNode* current = head;   // ��ǰ�ڵ�

    // ����Ϊ��
    if (!head)
    {
        return NULL;
    }

    // ����ͷ�ڵ㲻�洢���ݣ������head->next��ʼ��������
    while (current->next)
    {
        // ż���ڵ㣬��Ҫɾ��
        if (current->next->data % 2 == 0)
        {
            // ��ʱ�ڵ㣬���浱ǰ�ڵ�(current->next)
            struct ListNode* temp = current->next;
            // ��ǰ�ڵ���¸��ڵ�ĵ�ַ���ǵ�ǰ�ڵ�ĵ�ַ
            current->next = temp->next;
            // �ͷŵ�ǰ�ڵ�
            free(temp);
        }
        else
        {
            current = current->next;
        }
    }

    // ͷ�ڵ㲻�洢ֵ
    head = head->next;

    return head;
}
