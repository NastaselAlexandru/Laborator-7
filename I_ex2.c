#include <stdio.h>
#include <stdlib.h>

struct simplyLinkedList
{
    int data;
    struct node *next;
};

int main()
{
    struct simplyLinkedList *prev,*head,*p;
    int n,i;
    printf ("number of elements:");
    scanf("%d",&n);

    head=NULL;
    for(i=0; i<n; i++)
    {
        p=malloc(sizeof(struct simplyLinkedList));
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            prev->next=p;
        prev=p;
    }
    p=head;
    while(p!=NULL)
    {
        printf("%d--->",p->data);
        p=p->next;
    }
    printf("NULL");
    return 0;
}
