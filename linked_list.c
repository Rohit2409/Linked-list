#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *current;

void insert_beg();


void create()
{
    struct node*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter item \n");
    scanf("%d",&new_node->data);
    new_node->next=NULL;

    if(head==NULL)
    {
        head=new_node;
        current=head;
    }
    else
    {
        current->next=new_node;
        current=new_node;
    }
}
void insert_spec()
{
    struct node *new_node,*temp;
    int pos,i;
     printf("enter position \n");
     scanf("%d",&pos);
    if(pos==1)
    {
        insert_beg();
    }
    else
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("enter element \n");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        temp=head;
        for(i=1;i<pos-1;i++)
            temp=temp->next;

        new_node->next=temp->next;
        temp->next=new_node;
    }
}

void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void insert_beg()
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter element \n");
    scanf("%d",&new_node->data);
    if(head==NULL)
    {
        head=new_node;
        new_node=head;
    }
    else
    {
        new_node->next=head;
        head=new_node;
    }
}
int main()
{
 int choice;
 do
 {
  printf("Menu \n");
  printf("1.Create \n");
  printf("2.Insert beg \n");
  printf("3.insert at specific position \n");
  printf("4.Display \n");
  printf("5.Exit \n");
  printf("enter choice \n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    create();
    break;
   }
   case 2:
   {
    insert_beg();
    break;
   }
   case 3:
   {
    insert_spec();
    break;
   }
   case 4:
   {
    display();
    break;
   }
    case 5:
   {
    exit(0);
    break;
   }
   default :
   {
   printf("invalid choice \n");
   }
 }
}while(choice>-1);

 return 0;
}


