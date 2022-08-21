#include<stdio.h>

//Kindly uncomment each objective/subsections before assessment 

int main()
{
    //Objective_1
    /*
    printf("\nAssignment_1\n");
    int i=1,N,s=0;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d\n",i);
        s = s+i;
        i++;
    }
    printf("The sum is %d",s);
    */


    //Objective_2
    /*
    printf("\nAssignment_2\n");
    int i=1,n=1,N,s=0;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    while(n<=N)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
            s = s+i;
            n++;
        }
        i++;
    }
    printf("The sum is %d",s);
    */
    

    //Objective_3
    /*
    printf("\nAssignment_3\n");
    int i=1,n=1,N,s=0;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    while(n<=N)
    {
        if (i%2==1)
        {
            printf("%d\n",i);
            s = s+i;
            n++;
        }
        i++;
    }
    printf("The sum is %d",s);
    */


    //Objective_4
    /*
    printf("\nAssignment_4\n");
    int i=1,N,s=0;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d\n",i*i);
        s = s+(i*i);
        i++;
    }
    printf("The sum is %d",s);
    */

    //Objective_5
    /*
    printf("\nAssignment_5\n");
    int i=1,N,s=0;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d\n",i*i*i);
        s = s+(i*i*i);
        i++;
    }
    printf("The sum is %d",s);
    */

    
    //Objective_6
    /*
    printf("\nAssignment_6\n");
    int i=1,f=1,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(i<=n)
    {
        f = f*i;
        i++;
    }
    printf("The factorial of %d is %d",n,f);
    */

    
    //Objective_7
    /*
    int n,d=10,m=1;
    printf("\nEnter a number:\n");
    scanf("%d",&n);
    if(n!=0)
    {
        while(n/d!=0)
        {
            d = d*10;
            m+=1;
        }
        printf("The number has %d digits",m);

    }
    else
    printf("The number has one digit and the number is 0");
    */

    //Objective_8
    /*
    int n,d=1,g=1,p=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>=1)
        while(d<=n)
        {
            if (n%d==0)
            {
                g = n;
                p+=1;
            }
        d+=1;
        }
    else
    printf("The number is 0, not a prime");

    if (p==1)
    printf("The number is 1, not a prime");
    if (p==2)
    printf("The number is %d, a prime",g);
    if (p>2)
    printf("The number is %d, not prime",g);
    */
    
    
    //Objective_9
    /*
    int a,b,n=2,l=1;
    printf("Enter two numbers: \n");
    scanf("%d %d",&a,&b);
    if (a==1 || b==1)
    printf("The LCM of both the number is: %d",a*b);
    else
    {
        while(a!=1 || b!=1)
        {
            do
            {
                if(a%n==0 && b%n==0)
                {
                    a = a/n;
                    b = b/n;
                    l = l * n;
                }
                if(a%n==0 && b%n!=0)
                {
                    a = a/n;
                    l = l * n;
                }
                if(a%n!=0 && b%n==0)
                {
                    b = b/n;
                    l = l * n;
                }
            }
            while (a%n==0 || b%n==0);

            n = n+1;
        }
        printf("The LCM of both the number is %d",l);
    }
    */


    //Objective_10
    /*
    int n,d=10,no=1,i,nx=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    //for loop for finding the number of digits
    if (n>9)
    {
        while(n/d!=0)
        {
            d = d*10;
            no+=1;
        }
    }
    else
    printf("Reverse of the number is not possible");
    
    printf("The number of digits are %d\n",no);
    d/=10;

    //for loop for reversing the number
    for(no;no>1;no--)
    {
        i = (n%10)*d;
        nx = i + nx;
        n = n/10;
        d/=10;
    }
    n = n+nx;
    printf("The number is %d",n);
    */
       
    return 0;
    
}