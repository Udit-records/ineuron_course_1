#include<stdio.h>

int main()
{
    //Objective_1
    /*
    int a[10],sum=0,i=0;

    for(i=0;i<=9;i++)
    {
        printf("Enter the %d number:\n",i+1);
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("The sum of entered 10 numbers is %d",sum);
    */


    //Objective_2
    /*
    int a[10],i=0;
    float avg,sum=0.0;

    for(i=0;i<=9;i++)
    {
        printf("Enter the %d number:\n",i+1);
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    avg = sum/10;
    printf("The Average of the entered 10 numbers is %f",sum/10);
    */


    //Objective_3
    /*
    int a[10],i=0,s_even=0,s_odd=0;
    
    for(i=0;i<=9;i++)
    {
        printf("Enter the %d number:\n",i+1);
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        s_even = s_even + a[i];
        else
        s_odd = s_odd + a[i];
    }
    printf("The sum of the entered even numbers is %d\n",s_even);
    printf("The sum of the entered odd numbers is %d",s_odd);
    */


    //Objective_4
    /*
    int a[10],g=0,i=0;

    for(i=0;i<=9;i++)
    {
        printf("Enter the %d number:\n",i+1);
        scanf("%d",&a[i]);
        if(a[i]>=g)
        g=a[i];
    }
    printf("The greatest of entered 10 numbers is %d",g);
    */


    //Objective_5
    /*
    int a[10],s=0,i=0;

    for(i=0;i<=9;i++)
    {
        printf("Enter the %d number:\n",i+1);
        scanf("%d",&a[i]);
        if(i==0)
        s=a[i];
        if(a[i]<=s)
        s=a[i];
    }
    printf("The smallest of entered 10 numbers is %d",s);
    */


    /*
    //Objective_6
    int a[10],b[10],k=0,i=0,j=0,temp;
    for(i=0;i<=9;i++)
    {
        printf("Enter the %d number:\n",i+1);
        scanf("%d",&a[i]);
    }
    i=1;
    while(i<=9)
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
    printf("The numbers in increasing order are:\n");

    for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }
    */
    

    /*
    //Objective_7
    int a[10],i,h=0,sh=0;

    for(i=0;i<=9;i++)
    {
        printf("Enter the %d number:\n",i+1);
        scanf("%d",&a[i]);
    }
    
    if (a[1]>a[0])
    {
        h = a[1];
        sh = a[0];
    }
    else
    {
        h = a[0];
        sh = a[1];
    }

    for(i=2;i<=9;i++)
    {
        if(a[i]>h)
        {
            sh = h;
            h = a[i];
        }
        else
        {
            if (a[i]>sh)
            sh = a[i];
        }

    }
    printf("The second largest numbers is %d",sh);
    */

    
    /*
    //Objective_8
    int a[10],i,s=0,ss=0;

    for(i=0;i<=9;i++)
    {
        printf("Enter the %d number:\n",i+1);
        scanf("%d",&a[i]);
    }
    
    if (a[1]>a[0])
    {
        s = a[0];
        ss = a[1];
    }
    else
    {
        s = a[1];
        ss = a[0];
    }

    for(i=2;i<=9;i++)
    {
        if(a[i]<s)
        {
            ss = s;
            s = a[i];
        }
        else
        {
            if (a[i]<ss)
            ss = a[i];
        }

    }
    printf("The second largest numbers is %d",ss);
    */

    

    /*
    //Objective_9
    int a[10],k=0,i=0,j=0,temp;
    printf("Enter the 10 number:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The numbers in reverse order are:\n");

    for(i=9;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    */


    /*
    //Objective_10
    int a[10],b[0],k=0,i=0,j=0,temp;
    printf("Enter the 10 number:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    
    printf("The contents of the array b[] are\n");
    for(i=0;i<=9;i++)
    {
        printf("%d\n",b[i]);
    }
    */

    

    return 0;
}
