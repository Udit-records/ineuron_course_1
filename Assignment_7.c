#include<stdio.h>
#include<stdlib.h>
int main()
{
    //Objective_1
    /*
    int a,f=0,nx=1,N,i=3;
    printf("Enter the value of N:");
    scanf("%d",&N);
    if (N==1)
    printf("The first term is 0");
    if (N==2)
    printf("The second term is 1");
    if (N>2)
    {
        while(i<=N)
        {
            a = nx;
            nx = f+nx;
            f = a;
            i+=1;
        }
    }
    if (N>2)
    printf("The %d term of the fabonnaci series is %d",N,nx);
    */


    //Objective_2
    /*
    int a,f=0,nx=1,N,i=3;
    printf("Print the Enter of N:");
    scanf("%d",&N);
    if (N==1)
    printf("The Fabonnaci series is 0");
    if (N==2)
    printf("The Fabonnaci series is 0 1");
    if (N>2)
    {
        printf("The fabonnaci series is 0 1");
        while(i<=N)
        {
            a = nx;
            nx = f+nx;
            f = a;
            i+=1;
            printf(" %d",nx);
        }
    }
    */


    //Objective_3
    /*
    int a,f=1,nx=1,N,i=3;
    printf("Enter the number, N:");
    scanf("%d",&N);
    if (N==0)
    printf("The number is in the Fabonnaci series");
    if (N==1)
    printf("The number is in the Fabonnaci series");
    if (N>1)
    {
        while(nx<=N)
        {
            a = nx;
            nx = f+nx;
            f = a;
            if (nx==N)
            break;
        }
        if (nx==N)
        printf("The number is in the Fabonnaci series");
        else
        printf("The number is not in the Fabonnaci series");
    }
    */


    //Objective_4
    /*
    int a,b,s,l,r;
    printf("Enter the two numbers\n");
    scanf("%d %d",&a,&b);
    if (a>b)
    l=a;
    s=b;
    if (a<b)
    l=b;
    s=a;
    if (a==b)
    {
        s=a;
        printf("The HCF of two numbers. %d and %d, is %d",a,b,s);
        exit(0);
    }
    while (r!=0)
    {
        r = l%s;
        l = s;

        if (r==0)
        break;
        else
        s = r;
    }
    printf("The HCF of two numbers. %d and %d, is %d",a,b,s);
    */


    //Objective_5
    /*
    int a,b,l,i=1;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    if (a>b)
    l=a;
    else
    l=b;
    while(i<=l)
    {
        if(a%i==0 && b%i==0 && i!=1)
        {
            printf("The numbers are not co-prime");
            break;
        }
        
        if(i==l)
        {
            printf("The numbers are co-prime");
            break;
        }
        i++;
    }
    */


    //Objective_6
    /*
    int n=2,i=1;
    printf("The prime number under 100 are:\n");
    while(n<100)
    {
        while(i<=n)
        {
            if (n%i==0 && i<n && i!=1)
            {
                break;
            }

            if (n%i==0 && i==n)
            {
                printf("%d ",i);
            }
            i = i+1;
        }
        n = n+1;
        i = 1;
    }
    */
    
    //Objective_7
    /*
    int a,b,i=1,n;
    printf("Enter the two numbers:\n");
    scanf("%d %d",&a, &b);
    n = a+1;
    printf("The prime numbers between %d and %d are:\n",a,b);
    while(n<b)
    {
        while(i<=n)
        {
            if (n%i==0 && i<n && i!=1)
            {
                break;
            }

            if (n%i==0 && i==n)
            {
                printf("%d ",i);
            }
            i = i+1;
        }
        n = n+1;
        i = 1;
    }
    */

    
    //Objective_8
    /*
    int n,no,i=1,flag=0;
    printf("Enter the number:\n");
    scanf("%d",&no);
    printf("The prime number next to the number %d is:\n",no);
    n = no+1;
    while(n>no && flag!=1)
    {
        while(i<=n)
        {
            if (n%i==0 && i<n && i!=1)
            {
                break;
            }

            if (n%i==0 && i==n)
            {
                printf("%d ",i);
                flag = 1;
            }
            i = i+1;
        }
        n = n+1;
        i = 1;
    }
    */

    return 0;
}