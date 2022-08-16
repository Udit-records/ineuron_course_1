#include<stdio.h>
//Kindly uncomment the particular objective to execute it
int main()
{
    //objective_1
    /*
    printf("\nobjective_1\n");
    int n;
    printf("Enter a number: ");
    scanf("%d",&n); //enter a number
    printf("The last digit of the entered number is: %d",n%10);
    printf("\n\n");
    */

    //objective_2
    /*
    printf("\nobjective_2\n");
    int i,m;
    printf("Enter a number: ");
    scanf("%d",&m); //enter a number
    i = m % 10;
    m = m - i;
    m = m / 10;
    printf("The entered number without last digit is: %d",m);
    printf("\n\n");
    */

    //objective_3
    /*
    printf("\nobjective_3\n");
    int x,y,z;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("\nEnter the second number: ");
    scanf("%d",&y);
    printf("\nThe entered numbers are, x=%d, y=%d\n",x,y);
    z = x;
    x = y;
    y = z;
    printf("The numbers after swapping, x=%d, y=%d",x,y);
    printf("\n\n");
    */

    //objective_4
    /*
    printf("\nobjective_4\n");
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("\nEnter the second number: ");
    scanf("%d",&b);
    printf("\nThe entered numbers, a=%d, b=%d\n",a,b);
    b = a + b;
    a = b - a;
    b = b - a;
    printf("The numbers after swapping, a=%d, b=%d",a,b);
    printf("\n\n");
    */

    //objective_5
    /*
    printf("\nobjective_5\n");
    int t,l,s,f;
    printf("Enter a three digit number:");
    scanf("%d",&t);
    l = t % 10;
    s = (t % 100);
    s = (s-(s%10))/10;
    f = (t - s)/100;
    printf("Last digit:%d, Second digit:%d, Third digit:%d\n",l,s,f);
    t = l+s+f;
    printf("The sum of the digits of the entered number is:%d",t);
    */

    //objective_6
    /*
    printf("\nobjective_6\n");
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    printf("\nThe ASCII of the entered characte %c is %d\n",c,c);
    */

    //objective_7
    /*
    printf("\nobjective_7\n");
    int i,j,p=1,n=8;
    printf("Enter a number:");
    scanf("%d",&i);
    j=i&1;
    while(n != 0)
    {
    if(j == 1)
    {
        printf("The 1 is at position %d from LSB",p);
        break;
    }
    i=i>>1;
    j=i&1;
    p=p+1;   
    }
    */

    //objective_8
    /*
    printf("\nobjective_8\n");
    int i,j;
    printf("Enter a number:");
    scanf("%d",&i);
    j = i&1;
    if (j==1)
    printf("The number is Odd");
    else
    printf("The number is Even");
    */


    //objective_9
    /*
    printf("\nobjective_9\n");
    int i;
    float f;
    char c;
    double d;
    printf("size of variables for type integer is %d and for type float is %d\n",sizeof(i),sizeof(f));
    printf("size of variables for type char is %d and for type double is %d\n",sizeof(c),sizeof(d));
    */

    //objective_10
    /*
    printf("\nobjective_10\n");
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    x = x - (x % 10);
    printf("\nThe desired number is:%d\n",x);
    */

    //objective_11
    /*
    printf("\nobjective_11\n");
    int n,d;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Enter a digit");
    scanf("%d",&d);
    n = (n*10) + d;
    printf("The desired number is %d",n);
    */

    //objective_12
    /*
    printf("\nobjective_12\n");
    printf("Enter the INR value:");
    float R;
    scanf("%f",&R);
    printf("The USD value corresponding to INR %f is %f",R,R/76.23);
    */

    //objective_13
    /*
    printf("\nobjective_13\n");
    int t,l,s,f;
    printf("Enter a three digit number:");
    scanf("%d",&t);
    l = t % 10;
    s = (t % 100);
    s = (s-(s%10))/10;
    f = (t - s)/100;
    printf("Last digit:%d, Second digit:%d, Third digit:%d\n",l,s,f);
    t = s + (f*10) + (l*100);
    printf("The rotated form of the entered number is:%d",t);
    */



    return 0;
}