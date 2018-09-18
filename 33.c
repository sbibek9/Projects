#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next;
}node;
node *head = NULL;
node *insert(node *head,int num);
void print(node *head);
void main()
{
  int n,number,i;
  printf("Enter the limit\n");
  scanf("%d",&n);
  for (i = 0; i < n; i++)
  {
    printf("Enter the data:\n");
    scanf("%d",&number);
    insert(head,number);
  }
  print(head);
}
node *insert(node *head,int num)
{
  node *temp = NULL, *p = NULL;
  head=(node*)malloc(sizeof(node));
  temp=(node*)malloc(sizeof(node));
  temp->data=num;
  temp->next=NULL;
  if (head==NULL)
  {
    head=temp;
  }
  else
  {
    while (head->next!=NULL)
    {
      head=head->next;
    }
    head=temp;
  }
  return head;
}
void print(node *head)
{
  if (head==NULL)
  {
    printf("List is empty\n");
  }
  while (head->next!=NULL)
  {
    printf("Data: %d \n",head->data);
    head=head->next;
  }
}
