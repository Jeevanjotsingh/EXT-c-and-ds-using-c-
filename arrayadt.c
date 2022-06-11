#include <stdio.h>
#include <stdlib.h>
struct arrayadt
{
    int capacity;
    int index;
    int *ptr;
} adt;
void create();
void insert();
void append();
void delete ();
void edit();
void get();
void main()
{
    create();
    adt.index=0;
    while (1)
    {
        int op;
        printf("\n\t1.Insert\n\t2.Append\n\t3.Delete\n\t4.Edit\n\t5.Get\n\t6.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            insert();
            break;
        case 2:
            append();
            break;
        case 3:
            delete ();
            break;
        case 4:
            edit();
            break;
        case 5:
            get();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid operator \n");
        }
    }
}
void create()
{
    printf("Enter the size of your array: ");
    scanf("%d", &adt.capacity);
    adt.ptr = (int *)calloc(adt.capacity, sizeof(int));
    return;
}
void insert()
{
    if(adt.index==adt.capacity+1)
    {
        printf("Array is full");
        return ;
    }
    else
    {
    int num, index;
    printf("Enter the index:");
    scanf("%d", &index);
    printf("\nEnter your number:");
    scanf("%d", &num);
    if(index>adt.index)
    {
        printf("Please put index value less than %d",adt.index);
        return ;
    }
    else
    {
    for (int i = adt.index; i >= index; i--)
    {
        adt.ptr[i + 1] = adt.ptr[i];
    }
    adt.ptr[index] = num;
    adt.index++;
    return;
    }
    }
}
void append()
{
    int num;
    if(adt.index==adt.capacity+1)
    {
        printf("Array is full");
        return ;
    }
    else
    {
    printf("\nEnter your number for index %d:",adt.index);
    scanf("%d", &num);
    adt.ptr[adt.index++] = num;
    return;
    }
}
void delete ()
{
    int index;
    printf("\nEnter the index: ");
    scanf("%d", &index);
    for (int i = index; i < adt.index; i++)
    {
        adt.ptr[i] = adt.ptr[i + 1];
    }
    adt.index--;
    return;
}
void edit()
{
    int num, index;
    printf("\nEnter the index no.:");
    scanf("%d", &index);
    printf("Enter your number: ");
    scanf("%d", &num);
    adt.ptr[index] = num;
    return;
}
void get()
{
    int index;
    printf("\nEnter the index number you want to print: ");
    scanf("%d", &index);
    if(index>adt.index)
    {
        printf("Please search within the range 0-%d",adt.index);
    }
    else
    printf("%d", adt.ptr[index]);
    return;
}