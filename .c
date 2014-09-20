#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node * next;
};
struct node * create()
{
    struct node * head,*temp, *first=NULL;
    int n,i=0,k;
    printf("\nEnter number of nodes you wanna add");
    scanf("%d",&n);
    while (i<n)
    {
        head  = (struct node *)malloc(sizeof(struct node *));
        printf("Enter the data item\n");
        scanf("%d", &head->info);
        if (first!= NULL)
        {
            temp->next = head;
            temp = head;
        }
        else
        {
            first = temp = head;
        }

    i++;
    }
    printf("Do you wanna create loop?(1/0)\n");
    scanf("%d",&k);
    if(k==1)
    {
        temp->next=first;
    }
    else
        temp->next=NULL;
    return first;
}
/*
void display(struct node *head)
{
    struct node * current;
    current=head;
    while (current!=NULL)
    {
        printf("\nNode value is %d",current->info);
        current=current->next;
    }
}
*/
void detect(struct node *abhi)
{
    struct node *slow=abhi;
    struct node *fast=abhi;
    printf("\n*****Detect called*****");
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
           printf("\nFound Loop");
           return;
        }
        else
        {
           printf("\nNo Loop");
        }
    }

}

int main()
{
    struct node *head = create();
    detect(head);
    //display(head);
    return 0;
}
