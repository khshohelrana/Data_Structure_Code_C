#include<stdio.h>
struct node
{    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insert(node* &head,int val)
{
    node* n=new node(val);
    node* t=head;
    if(head==NULL)
    {
        head=n;
        return;
    }

   while(t->next!=NULL)
   {
       t=t->next;
   }
   t->next=n;
}
void linear(node* &head,int s)
{
    node* t=head;

    int c=0;

    while(t!=NULL)
    {   c++;
        if(t->data==s)
        {
            printf("%d found at %d index",s,c-1);break;
        }
        t=t->next;
    }
}
int main()
{
   node* head=NULL;
int n,s;
printf( "How many elements:");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    insert(head,a[i]);
}
printf( "Searching element:");
scanf("%d",&s);
   linear(head,s);
}
