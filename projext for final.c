#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct Student
{
    int id;
    char name[100];
    char phone[100];
    float salary;
    struct Student *next;

}* head=NULL;
int c=0;
void insert(int id, char* name, char* phone, float salary)
{   c++;

    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
    student->id = id;
    strcpy(student->name, name);
    strcpy(student->phone, phone);
    student->salary = salary;
    student->next = NULL;

    if(head==NULL)
    {
        // if head is NULL
        // set student as the new head
        head = student;
    }
    else
    {
        // if list is not empty
        // insert student in beginning of head
        student->next = head;
        head = student;
    }

}
void search(int id)
{
    struct Student * temp = head;
    while(temp!=NULL)
    {
        if(temp->id==id)
        {
            printf("ID Number: %d\n", temp->id);
            printf("Name: %s\n", temp->name);
            printf("Phone: %s\n", temp->phone);
            printf("Salary: %0.4f\n", temp->salary);
            return;
        }
        temp = temp->next;
    }
    printf("Employee with ID %d is not found !!!\n", id);
}
void update(int id)
{
    struct Student * temp = head;
    while(temp!=NULL)
    {

        if(temp->id==id)
        {
            printf("Record with ID %d Found !!!\n", id);
            printf("Enter new name: ");
            scanf("%s", temp->name);
            printf("Enter new phone number: ");
            scanf("%s", temp->phone);
            printf("Enter new Salary: ");
            scanf("%f",&temp->salary);
            printf("Updation Successful!!!\n");
            return;
        }
        temp = temp->next;

    }
    printf("Employee with ID %d is not found !!!\n", id);

}
void Delete(int id)
{
    struct Student * temp1 = head;
    struct Student * temp2 = head;
    while(temp1!=NULL)
    {

        if(temp1->id==id)
        {

            printf("Record with id %d Found !!!\n", id);

            if(temp1==temp2)
            {
                // this condition will run if
                // the record that we need to delete is the first node
                // of the linked list
                head = head->next;
                free(temp1);
            }
            else
            {
                // temp1 is the node we need to delete
                // temp2 is the node previous to temp1
                temp2->next = temp1->next;
                free(temp1);
            }

            printf("Record Successfully Deleted !!!\n");
            return;

        }
        temp2 = temp1;
        temp1 = temp1->next;

    }
    printf("Employee with ID %d is not found !!!\n", id);

}
void display()
{
    struct Student * temp = head;
    while(temp!=NULL)
    {

        printf("ID Number: %d\n", temp->id);
        printf("Name: %s\n", temp->name);
        printf("Phone: %s\n", temp->phone);
        printf("Salary: %0.2f\n\n", temp->salary);
        temp = temp->next;

    }
}

void bubblesort()
{  printf("%d",c);
  printf("\n");
     struct Student * temp , *cpt;
     int a;
     float b;
     char n[100], p[100];
     temp= head;
    while(temp->next!=NULL)

     {  cpt=temp->next;
        while(cpt!=NULL)

        {  if(temp->id > cpt->id)

            {   a=temp->id;
                temp->id=cpt->id;
                cpt->id=a;

                strcpy(n,temp->name );
                strcpy(temp->name,cpt->name);
                strcpy(cpt->name,n);
                //n=temp->name;
                //temp->name=cpt->name;
                //cpt->name=n;

                strcpy(p, temp->phone);
                strcpy(temp->phone, cpt->phone);
                strcpy(cpt->phone, p);
                //p=temp->phone;
                // temp->phone=cpt->phone;
                // cpt->phone=p;

                b=temp->salary;
                temp->salary=cpt->salary;
                cpt->salary=b;

            }

            cpt=cpt->next;
        }
         temp=temp->next;
    }
display();
}



int main()
{

    system("color 70");
    head = NULL;
    int option,p, choice;
    char name[100];
    char phone[100];
    int id;
    float salary;



    do
    {
mainMenu:
        printf("\n1.Employee's information");
        printf("\n2.Authority panal");
        printf("\n3.Exit");
        printf("\nEnter your choise: ");
        scanf("%d",&option);
        switch(option)
        {
        case 1: system("cls");
                printf("Enter Employee's id: ");
                scanf("%d", &id);
                fflush(stdin);
                printf("Enter Employee's name: ");
                //scanf("%s", name);
                gets( name);
                printf("Enter Employee's phone number: ");
                scanf("%s", phone);
                fflush(stdin);
                printf("Enter Employee's Salary: ");
                scanf("%f", &salary);
                fflush(stdin);
                insert(id, name, phone, salary);
            /*system("cls");
            printf("\n1.Insert Information");
            printf("\n2.Back Main Menu");
            printf("\nEnter your choise: ");
            scanf("%d", &p);
            if(p==1)
            {    system("cls");
                printf("Enter Employee's id: ");
                scanf("%d", &id);
                fflush(stdin);
                printf("Enter Employee's name: ");
                //scanf("%s", name);
                gets( name);
                printf("Enter Employee's phone number: ");
                scanf("%s", phone);
                fflush(stdin);
                printf("Enter Employee's Salary: ");
                scanf("%f", &salary);
                fflush(stdin);
                insert(id, name, phone, salary);

            }
            else if(p==2)
            {
                system("cls");
                goto mainMenu;
            }


            else
            {
                exit(0);
            }
            */
            break;

        case 2:
            system("cls");
            printf("1 Information List of Employees");
            printf("\n2 to search for Employee details");
            printf("\n3 to delete Employee details");
            printf("\n4 to update Employee details");
            printf("\n5 to display all Employee details");
            printf("\n6 Back to Main Menu");
            do
            {
                printf("\nEnter Choice: ");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1: bubblesort();
                        break;

                case 2:
                    printf("Enter Employee's ID to search: ");
                    scanf("%d", &id);
                    search(id);
                    break;
                case 3:
                    printf("Enter Employee's ID to delete: ");
                    scanf("%d", &id);
                    Delete(id);
                    break;
                case 4:
                    printf("Enter ID number to update: ");
                    scanf("%d", &id);
                    update(id);
                    break;
                case 5:
                    display();
                    break;
                case 6:
                    goto mainMenu;
                    break;
                default:
                    printf("Please Enter Correct Option");
                }

            }
            while (choice != 0);
        case 3:
            exit(0);
            break;
        }

    }
    while (option !=0);

}





/*https://slaystudy.com/student-management-system-using-linked-list-in-c/*/
