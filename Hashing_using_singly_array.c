#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void insert(int val);
void check(int num);
int lookup(int num);

int hkey,arr[] = {30, 8, 21, 4, 20, 6, 22, 19},arr1[10],i;

void insert(int val)
{
    hkey = (val % 10) - 1;
    if(arr1[hkey] == -1)
    {
        arr1[hkey] = val;
    }
    else
    {
        if(hkey < 9)
        {
            for(i = hkey + 1; i<10; i++)
            {
                if(arr1[i] == -1)
                {
                    arr1[i] = val;
                    break;
                }
            }
        }
        for(i=0;i<hkey;i++)
        {
            if(arr1[i] == -1)
            {
                arr1[i] = val;
                break;
            }
        }
    }
}
int lookup(int num)
{
    int flag =0;
    hkey = (num % 10) - 1;
    if(arr1[hkey] == num)
        flag = 1;
    else{
        for(i=hkey + 1;i<10;i++)
        {
            if(arr1[i] == num)
            {
                flag = 1;
                hkey = i;
                break;
            }
        }
    }
    if(flag == 0)
    {
        for(i =0;i<hkey;i++)
        {
            if(arr1[i] == num)
            {
                flag = 1;
                hkey = 1;
                break;
            }
        }
    }
    return flag;
}

void display()
{
    printf("elements in hash table: ");
    for(i=0;i<10;i++)
        printf("%d ",arr1[i]);
    printf("\n");
}

int main()
{
    for(i=0;i<10;i++)
        arr1[i] = -1;
    insert(30);
    insert(6);
    insert(4);
    insert(8);
    insert(19);
    insert(22);
    insert(21);
    display();
    for(i = 0;i<10;i++)
    {
        if(lookup(10 - arr1[i]))
            printf("elements found");
    }
    return 0;
}
