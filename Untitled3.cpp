/*
#include<iostream>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
///
void insertAtPosition(node* &head,int val,int p)
{     node* n;
    n=new node(val);
    node* ptr=head;
    int c=0;
    if(p==1)
    {
        n->next=ptr;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        c++;
        if(c==(p-1))
        {
            n->next=temp->next;
            temp->next=n;
            break;

        }
        temp=temp->next;
    }
    temp->next=n;
}
void insertValueAtTail(node* &head,int val)
{
    node* n;
    n=new node(val);
     if(head==NULL)
    {
    head=n;
    return;
    }
     node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
}

void insertValueAtHead(node* &head,int val)
{   node* n;
    n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    n->next=head;
    head=n;
}

void display(node* head)
{
    if(head==NULL)
    {
        cout<< "No element is present.";
        return;
    }
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<< " ";
        temp=temp->next;
    }
}

int main()
{   node* head=NULL;
    int n;
int value;
    do
    {
        cout<< "\n*! 1 !*Insert at tail\n";
        cout<< "*! 2 !*Insert at head\n";
        cout<< "*! 3 !*Insert at a specific position\n";
        cout<< "*! 4 !*Display \n";

        cout<< "*! 5 !*exit\n";
        cout<< "Enter your choice:";
        cin>>n;

        switch(n)
        {
                case 1:
                {
                cout<< "Enter the value to insert:";
                cin>>value;
                insertValueAtTail(head,value);
                break;
                }
                case 2:
                {
                cout<< "Enter the value to insert:";
                cin>>value;
                insertValueAtHead(head,value);
                   break;
                }
                case 3:
                    {
                int b,p;
                cout<< "\nEnter the element which you want to insert: ";
                cin>>b;
                cout<< "\nEnter the position which you want to insert: ";
                cin>>p;
                insertAtPosition(head,b,p);
                break;
                    }
                case 4:
                {
                   display(head);
                   break;
                }
                case 5:
                {
                   exit(0);
                   break;
                }

                default: cout<< "Invalid......";return 0;
        }

    }while(n<=6);
}
*/

#include<iostream>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;
int count=0;
class node{
public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertAtPosition(node* &head,int val,int p)
{     node* n;
    n=new node(val);
    node* ptr=head;
    int c=0;
    if(p==1)
    {
       count++;
        n->next=ptr;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        c++;
        if(c==(p-1))
        {
            n->next=temp->next;
            temp->next=n;
            count++;
            break;

        }
        temp=temp->next;
    }
    temp->next=n;
}
void insertValueAtTail(node* &head,int val)
{
    node* n;
    n=new node(val);
     if(head==NULL)
    {
    count++;
    head=n;
    return;
    }
     node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
        count++;
}

void insertValueAtHead(node* &head,int val)
{   node* n;
    n=new node(val);
    if(head==NULL)
    {
        count++;
        head=n;
        return;
    }
    count++;
    n->next=head;
    head=n;
}

void display(node* head)
{
    if(head==NULL)
    {
        cout<< "No element is present.";
        return;
    }
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<< " ";
        temp=temp->next;
    }
}

int main()
{   node* head=NULL;
    int n;
int value;
    do
    {
        cout<< "\n*! 1 !*Insert at tail\n";
        cout<< "*! 2 !*Insert at head\n";
        cout<< "*! 3 !*Insert at a specific position\n";
        cout<< "*! 4 !*Display \n";
        cout<< "*! 5 !*Size\n";
        cout<< "*! 6 !*exit\n";
        cout<< "Enter your choice:";
        cin>>n;

        switch(n)
        {
                case 1:
                {
                cout<< "Enter the value to insert:";
                cin>>value;
                insertValueAtTail(head,value);
                break;
                }
                case 2:
                {
                cout<< "Enter the value to insert:";
                cin>>value;
                insertValueAtHead(head,value);
                   break;
                }
                case 3:
                    {
                int b,p;
                cout<< "\nEnter the element which you want to insert: ";
                cin>>b;
                cout<< "\nEnter the position which you want to insert: ";
                cin>>p;
                insertAtPosition(head,b,p);
                break;
                    }
                case 4:
                {
                   display(head);
                   break;
                }

                case 5:
                {
                   cout<< "\nThe size of the list is "<<count<<endl;
                   break;
                }
case 6:
                {
                   exit(0);
                   break;
                }

                default: cout<< "Invalid......";break;
        }

    }while(n<=6);
}
