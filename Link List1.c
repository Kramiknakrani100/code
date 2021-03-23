#include<stdio.h>
struct node
{
    int info;
    struct node *link;
};
struct node *empty(struct node *start, int data);
struct node *beg(struct node *start, int data);
struct node *end(struct node *start, int data);
struct node *nposition(struct node *start, int data, int position);
void dis(struct node *start);

int main()
{
    struct node *start=NULL;
    int x,data,position;
    while(1);
    {
        printf("1. empty list\n");
        printf("2. add beg\n");
        printf("3. add end\n");
        printf("4. add Nth position\n");
        printf("5. Display\n");
        printf("6. exit program\n");
        printf("enter no. = \n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            printf("enter value = \n");
            scanf("%d", &data);
            start=empty(start, data);
            break;
        case 2:
            printf("enter value = \n");
            scanf("%d", &data);
            start=beg(start, data);
            break;
        case 3:
            printf("enter value = \n");
            scanf("%d", &data);
            start=end(start, data);
            break;
        case 4:
            printf("enter value = \n");
            scanf("%d", &data);
            printf("enter position = \n");
            scanf("%d", &position);
            start=nposition(start, data, position);
            break;
        case 5:
            dis(start);
            break;
        case 6:
            exit(0);
        default :
            printf(" your input is wrong");
        }
    }
}
struct node *empty(struct node *start, int data)
{
    if(start != NULL)
    {
        printf(" list is not empty");
    }
    struct node *t;
    t= (struct node *)malloc(sizeof(struct node));
    t->info=data;
    t->link=NULL;
    start = t;
    return start;
}
struct node *beg(struct node *start, int data)
{
    struct node *t;
    t= (struct node *)malloc(sizeof(struct node));
    t->info=data;
    t->link=start;
    start=t;
    return start;
}
struct node *end(struct node *start, int data)
{
    struct node *t,*p;
    t= (struct node *)malloc(sizeof(struct node));
    t->info = data;
    p=start;
    while(p->link != NULL)
    {
        p = p->link;
    }
    p->link = t;
    t->link = NULL;
    return start;
}
struct node *nposition(struct node *start, int data, int position)
{
    int i;
    struct node *t,*p;
    t = (struct node *)malloc(sizeof(struct node));
    t->info=data;
    if(position == 1)
    {
        t->link=start;
        start=t;
        return start;
    }
    p=start;
    if(p == NULL)
    {
        printf("there Are Less Than %d value\n", position);
    }
    else
    {
      for(i=1;i<=position-1 && p != NULL;i++)
      {
          p=p->link;
      }
        t->link=p->link;
        p->link=t;
    }
    return start;
}
void dis(struct node *start)
{
    struct node *p;
    if(start == NULL)
    {
        printf("list is empty\n");
    }
    else{
        p=start;
        printf("List \n");
        while(p !=NULL)
        {
            printf("%d",p->info);
            p=p->link;
        }
        printf("\n");
    }
}




