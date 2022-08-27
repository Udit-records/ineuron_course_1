#include<stdio.h>
//before implementing the objective/subsections, Kindly uncomment it
float ar_circl(float);
float si_intrst(float,float,float);
int odd_even(int);
void n_natural(int);
void n_odd_natural(int);
int n_factorial(int);
int n_combo(int,int);
int n_permu(int,int);
int chk_digit(int,int);
void prime_factr(int);

int main()
{
    /*
    //Objective_1
    float r;
    printf("Enter the radius\n");
    scanf("%f",&r);
    printf("The area of the circle with radius %f is %f",r,ar_circl(r));
    */

    /*
    //Objective_2
    float p,r,t,si;
    printf("Enter the principle amont, Interest rate in percentage and period\n");
    scanf("%f %f %f",&p,&r,&t);
    printf("The simple interest in this case is %f", si_intrst(p,r,t));
    */

    /*
    //Objective_3
    int n,chck;
    printf("Enter a number\n");
    scanf(" %d",&n);
    chck = odd_even(n);
    if (chck==1)
        printf("The number is Even");
    if (chck==0)
        printf("The number is odd");
    */

    /*
    //Objective_4
    int n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("The first %d natural numbers are:\n",n);
    n_natural(n);
    */

    /*
    //Objective_5
    int n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("The first %d odd natural numbers are:\n",n);
    n_odd_natural(n);
    */

    /*
    //Objective_6
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The factorial of %d is:%d\n",n,n_factorial(n));
    */

    /*
    //Objective_7
    int n,r,comb;
    printf("Enter the number of items and the selectd items at a time\n");
    scanf("%d %d",&n,&r);
    comb = n_combo(n,r);
    printf("The combnation of %d items, selected %d at time is %d",n,r,comb);
    */

    /*
    //Objective_8
    int n,r,arngmnt;
    printf("Enter the number of items and the selectd items at a time\n");
    scanf("%d %d",&n,&r);
    arngmnt = n_permu(n,r);
    printf("The combnation of %d items, selected %d at time is %d",n,r,arngmnt);
    */

   /*
   //Objective_9
   int n,d,flag;
   printf("Enter a number");
   scanf("%d",&n);
   printf("Enter the digit to be checked");
   scanf("%d",&d);
   flag = chk_digit(n,d);
   if (flag==1)
   printf("The entered number %d contains %d digit",n,d);
   if (flag==0)
   printf("The entered number %d doesn't contain %d digit",n,d);
   */

   /*
   //Objective_10
   int n;
   printf("Enter a number\n");
   scanf("%d",&n);
   printf("All the prime factors of %d are\n",n);
   prime_factr(n);
   */


return 0;
}


//Function_1
float ar_circl(float R)
{
    return (3.14*R*R);
}

//Function_2
float si_intrst(float P, float R, float T)
{
    return ((P*R*T)/100);
}

//Function_3
int odd_even(int N)
{
    return (N%2==0);
} 

//Function_4
void n_natural(int terms)
{
    int i;
    for(i=1;i<=terms;i++)
    {
        printf("\n%d",i);
    }
}

//Function_5
void n_odd_natural(int terms)
{
    int i;
    for(i=0;i<=(terms-1);i++)
    {
        printf("\n%d",(2*i)+1);
    }
}

//Function_6
int n_factorial(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++)
    {
        fact= i*fact;
    }
    return fact;
}

//Objective_7
int n_combo(int N,int R)
{
    int COMB;
    COMB = n_factorial(N)/(n_factorial(R)*n_factorial(N-R));

    return COMB;
}

//Objective_8
int n_permu(int N,int R)
{
    int PERMU;
    PERMU = n_factorial(N)/n_factorial(N-R);
    return PERMU;
}

//Objecctive_9
int chk_digit(int N,int D)
{
    int R;
    while(N!=0)
    {
        R = N%10;
        N = N/10;
        if(R==D)
        {
            return 1;
        }
    }
    return 0;
}

//Objective_10
void prime_factr(int N)
{
    int i=2;
    while(i>1)
    {
        if(N%i==0)
        {
            printf(" %d",i);
            N = N/i;
        }
        else
            i+=1;

    }
}