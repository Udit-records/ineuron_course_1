#include<stdio.h>
#include<string.h>

void obj_1(int *,int *);
void obj_2(char *,char *);
void sort(int *,int );


int main()
{

    /*
    printf("Objective_1");
    int *a,*b,i,j;
    i = 100;
    j = 150;
    a = &i;
    b = &j;
    //scanf("%c \n %c",&i,&j);
    printf("\nThe number before swapping, i:%d and j:%d",i,j);
    obj_1(a,b);
    printf("\nThe number after swapping, i:%d and j:%d",i,j);
    */

    
    /*
    printf("Objective_2");
    char *a,*b,i[15]="America",j[15]="Russia";
    a = &i[0];
    b = &j[0];
    //scanf("%c \n %c",&i,&j);
    printf("\nThe strings before swapping, i:%s and j:%s",i,j);
    obj_2(a,b);
    printf("\nThe strings after swapping, i:%s and j:%s",i,j);
    */

    /*
    printf("Objective_3\n");
    int i=0,elements=0;
    int a[20]={0},*addr;
    printf("Enter the number of elements to be added\n");
    scanf("%d",&elements);
    printf("Enter the content of the array: \n");
    for (i=0;i<elements;i++)
    {
        scanf("%d",&a[i]);
    }

    sort(a,elements);
    */


    /*
    printf("Objective_4\n");
    int a=1,*b,**c,***d;
    b = &a;
    c = &b;
    d = &c;
    printf("%d %d %d %d\n %d %d %d %d %d",a,b,*b,c,*c,**c,d,*d,**d,***d);
    */


    /*
    printf("Objective_5\n");
    int a,b,*aa,*bb;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    aa = &a;
    bb = &b;
    if (*aa > *bb)
    {
        printf("The greater number is: %d",*aa);
    }
    if (*aa < *bb)
    {
        printf("The greater number is: %d",*bb);
    }
    */

    /*
    printf("Objective_6\n");
    int i;
    char a[50] = "",*aa;
    printf("Enter the string:\n");
    fgets(a,50,stdin);
    aa = a;
    for (i=0;*(aa+i);i++)
    {
        i = i+1;
    }
    printf("The length of the string is %d",i);
    */

    
    /*
    printf("Objective_7\n");
    int i,vowels;
    char a[50] = "",*aa;
    printf("Enter the string:\n");
    fgets(a,50,stdin);
    aa = a;
    for (i=0;*(aa+i);i++)
    {
        if ('a' == *(aa+i) || 'e' == *(aa+i) || 'i' == *(aa+i) || 'o' == *(aa+i) || 'u' == *(aa+i))
        {
            vowels = vowels+1;
        }
        i = i+1;
    }
    printf("The length of the string is %d, \nwith number of vowels and consonents, %d and %d respectively",i,vowels,(i-vowels));
    */


    /*
    printf("Objective_8\n");
    int i,count,sum=0;
    int a[50] = {0},*aa;
    printf("Enter the number of elements to be entered to form an array:\n");
    scanf("%d",&count);
    printf("Enter the array elements:\n");
    for (i=0;i<count;i++)
    {
        scanf("%d",&a[i]);
    }
    aa = a;
    for (i=0;i<count;i++)
    {
        sum = sum + *(aa+i);
    }
    printf("The sum of the array elements is %d",sum);   
    */

    
    /*
    printf("Objective_9\n");
    int i,count,sum=0;
    int a[50] = {0},b[50] = {0},*aa;
    printf("Enter the number of elements to be entered to form an array:\n");
    scanf("%d",&count);
    printf("Enter the array elements:\n");
    for (i=0;i<count;i++)
    {
        scanf("%d",&a[i]);
    }
    aa = a;
 
    for (i=(count-1);i>=0;i--)
    {
        b[(count-1)-i] = *(aa+i);
    }
    printf("The reverse of the entered array is\n");
    for (i=0;i<count;i++)
    {
        printf("%d",b[i]);
    }
    */


    /*
    printf("Objective_10\n");
    int i,count=0;
    char a[50] = "",b[50] = "",*aa;
    printf("Enter the string:\n");
    fgets(a,20,stdin);
    printf("\n%s",a);
    printf("The number of elements of the entered string is:\n");
    aa = a;
    for (i=0; a[i] ;i++)
    {
        count = count+1;
    }
    printf("\n%d",count);
    aa = a;
 
    for (i=(count-1);i>=0;i--)
    {
        b[(count-1)-i] = *(a+i);
    }
    printf("\nThe reverse of the entered string is\n");
    for (i=0;i<count;i++)
    {
        printf("%c",b[i]);
    }
    */

    return 0;
}


//Defining Functions

void obj_1(int *A,int *B)
{
    int temp;
    temp = *B;
    *B = *A;
    *A = temp;
}


void obj_2(char *A,char *B)
{
    char temp[20]="";
    strcpy(temp,B);
    strcpy(B,A);
    strcpy(A,temp);
}


void sort(int *a,int N)
{
    int i=1,k=0,j=0,temp;

    while(i<=(N-1))
    {
        if (a[i]<a[i-1])
        {
            k=i;
            for(j=k-1;j>=0;j--)
            {
                if(a[k]<a[j])
                {
                    temp = a[j];
                    a[j]=a[k];
                    a[k]=temp;
                    k=k-1;
                }
            }
        }
        i++;
    }
    

    for (i=0;i<N;i++)
    {
        printf("%d ",*a);
        a = a+1;
    }



    //return &a[0];
    //return a;
}



