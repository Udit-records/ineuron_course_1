#include<stdio.h>
//please uncommnent the section/objective before compilation
int main(){

    //Objective_1
    /*
    printf("\nObjective_1\n");
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n>0)
    printf("The number is positive");
    else
    printf("The number is non-positive");
    */


    //Objective_2
    /*
    printf("\nObjective_2\n");
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n%5==0)
    printf("The number is divisible by 5");
    else
    printf("The number is not divisible by 5");
    */


    //Objective_3
    /*
    printf("\nObjective_3\n");
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n%2==0)
    printf("The number is even");
    else
    printf("The number is odd");
    */


    //Objective_4
    /*
    printf("\nObjective_4\n");
    int n,c;
    printf("Enter a number: ");
    scanf("%d",&n);
    c=n&1;
    if (c==0)
    printf("The number is even");
    else
    printf("The number is odd");
    */


    //Objective_5
    /*
    printf("\nObjective_5\n");
    int n,c1,c2;
    printf("Enter a number: ");
    scanf("%d",&n);
    c1=n/1000;
    c2=n/100;
    if(c1==0 && c2!=0) 
    printf("The number has three digits");
    else
    printf("The number has other than three digits");
    */


    //Objective_6
    /*
    printf("\nObjective_6\n");
    int f,s;
    printf("Enter first number");
    scanf("%d",&f);
    printf("Enter second number");
    scanf("%d",&s);
    if (f>s)
    printf("The greater number is %d",f);
    if (f<s)
    printf("The greater number is %d",s);
    if (f==s)
    printf("Both the numbers are equal, %d",f);
    */


    //Objective_7
    /*
    printf("\nObjective_7\n");
    int a,b,c,d;
    printf("Enter the a, b and c parameters of the quadratic equation\n");
    scanf("%d %d %d",&a,&b,&c);
    d = (b*b) - (4*a*c);
    printf("The quadratic equation is,\n %d(x*x) + %dx + %d",a,b,c);
    if (d>0)
    printf("\nThe roots are real and distinct");
    if (d<0)
    printf("\nThe roots are imaginary");
    if (d==0)
    printf("\nThe root are real and equal");
    */


    //Objective_8
    /*
    printf("\nObjective_8\n");
    int y;
    printf("Enter a year: ");
    scanf("%d",&y);
    if (y%4 == 0)
    {
        if ((y%100) == 0)
        {
            if (((y/100)%4) != 0)
            printf("Its not a leap year");
            else
            printf("its a leap year");
        }
        else
        printf("Its a leap year");
    }
    else
    printf("Its not a leap year");
    */


    //Objective_9
    /*
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
        printf("%d is the greatest",a);
        else
        printf("%d is the greatest",c);
    }
    else
    {
        if (b>c)
        printf("%d is the greatest",b);
        else
        printf("%d is the grea14test",c);
    }
    */


   //Objective_10
   /*
   printf("\nObjective_10\n");
   float s,c;
   printf("Enter the selling price");
   scanf("%d",&s);
   printf("Enter the Cost price");
   scanf("%d",&c);
   if (s>c)
   printf("Net profit is %f%%",(((s-c)/c)*100));
   else
   printf("Net loss is %f%%",(((c-s)/c)*100));
   */
   

   //Objective_11
   /*
   printf("\nObjective_11\n");
   int a,b,c,d,e;
   printf("Enter the marks of all the 5 subjects:\n");
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
   if (a&&b&&c&&d&&e > 33)
   printf("The student has passed the examination");
   else
   printf("The student has failed the examination");
   */


   //Objective_12
   /*
   printf("\nObjective_12\n");
   char a,c;
   printf("Enter an alphabet: ");
   scanf("%c",&a);
   c = int(a);
   if (c>=97 && c<=122)
   printf("The entered letter is in lower case");
   if (c>=65 && c<=90)
   printf("The entered letter is in UPPER case");
   */


   //Objective_13
   /*
   printf("\nObjective_13\n");
   int n;
   printf("Enter a number");
   scanf("%d",&n);
   if ((n%3 ==0) && (n%2 == 0))
   printf("The number is divisible by both, 2 and 3");
   else
   printf("The number is not divisible by both, 2 and 3");
   */
   

   //Objective_14
   /*
   printf("\nObjective_14\n");
   int n;
   printf("Enter a number");
   scanf("%d",&n);
   if ((n%3 ==0) || (n%7 == 0))
   printf("The number is either divisible by 3 or 7");
   else
   printf("The number is neither divisible by 3 nor 7");
   */


   //Objective_15
   /*
   printf("\nObjective_15\n");
   int n;
   printf("Enter a number");
   scanf("%d",&n);
   if (n>0)
   printf("The number is Positive");
   if (n<0)
   printf("The number is Negative");
   if (n==0)
   printf("The number is Zero");
   */


   //Objective_16
   /*
   printf("\nObjective_16\n");
   char c;
   int i;
   printf("Enter a Character: ");
   scanf("%c",&c);
   i = int(c);
   if (i>= 65 && i<=90)
   printf("The entered character is an Alphabet in upper case");
   if (i>= 97 && i<=122)
   printf("The entered character is an Alphabet in lower case");
   if (i>= 48 && i<=57)
   printf("The entered character is a Digit");
   if ((i>= 32 && i<=47) || (i>= 58 && i<=64) || (i>= 91 && i<=96) || (i>= 123 && i<=126))
   printf("The entered character is a special character");
   */
   

    //Objective_17
    /*
    printf("\nObjective_17\n");
    float a,b,c,g,h,i;
    printf("Enter the dimensions of the sides\n");
    scanf("%f %f %f",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            g = a;
            h = b;
            i = c;
        }
        
        else
        {
            g = c;
            h = b;
            i = a;
        }
    }
    else
    {
        if (b>c)
        {
            g = b;
            h = a;
            i = c;
        }
        
        else
        {
            g = c;
            h = a;
            i = b;
        }
    }
    printf("The greatest side is, %f",g);
    printf("The sides other than greatest are,%f and %f",h,i);
    if ((h+i) > g)
    printf("The sides belong to a valid triangle");
    else
    printf("The sides do not belong to a triangle");
    */


    //Objective_18
    /*
    printf("\nObjective_18\n");
    int m;
    printf("Enter the month number\n");
    scanf("%d",&m);
    if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    printf("The month has 31 days");
    if (m==4 || m==6 || m==9 || m==11)
    printf("The month has 30 days");
    if (m==2)
    printf("The month has either 28 days or 29 days");
    */

    return 0;
}