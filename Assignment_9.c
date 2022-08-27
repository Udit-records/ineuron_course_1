#include<stdio.h>
//before implementing the objective/subsections, Kindly uncomment it
int main()
{

    /*
    //Objective_1
    int m;
    printf("Enter a month number to show its number of days");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
        printf("31");
        break;

        case 2:
        printf("28 or 29");
        break;

        case 3:
        printf("31");
        break;

        case 4:
        printf("30");
        break;

        case 5:
        printf("31");
        break;

        case 6:
        printf("30");
        break;

        case 7:
        printf("31");
        break;

        case 8:
        printf("31");
        break;

        case 9:
        printf("30");
        break;

        case 10:
        printf("31");
        break;

        case 11:
        printf("30");
        break;

        case 12:
        printf("31");
        break;

    }
    */



    /*
    //Objective_2
    float i,j;
    int iter=1;
    char oper;
    printf("\nEnter two numbers and then:\n");
    printf("Enter 'A' for Addition\nEnter 'S' for subtraction\n");
    printf("Enter 'M' for multiplication\nEnter 'D' for division\nEnter 'E' for exit\n");
    while(iter!=0)
    {
        printf("\nEnter two numbers\n");
        scanf("%f %f",&i,&j);
        printf("Enter the operation\n");
        scanf(" %c",&oper);
        
        switch(oper)
        {
            case 'A':
            {
                printf("The addition of two number is %f",i+j);
                break;
            }

            case 'S':
            {
                printf("The subtraction of two number is %f",i-j);
                break;
            }

            case 'M':
            {
                printf("The multiplication of two number is %f",i*j);
                break;
            }

            case 'D':
            {
                printf("The division of two number is %f",i/j);
                break;
            }

            case 'E':
            {
                printf("Exiting the calculator");
                iter=0;
                break;
            }

            default:
                printf("Invalid input, try again");
        }
    }
    */
   

    
    /*
    //Objective_3
    int d=1;
    printf("Please enter the day number to get greeting for that day\n");
    printf(" or enter 0 to exit the softare\n");
    
    while(d!=0)
    {
        scanf("%d",&d);
        
        switch(d)
        {
            case 1:
                printf("Have a nice Monday\n");
                break;
            case 2:
                printf("Have a nice Tuesday\n");
                break;
            case 3:
                printf("Have a nice Wednesday\n");
                break;
            case 4:
                printf("Have a nice Thursday\n");
                break;
            case 5:
                printf("Have a nice Friday\n");
                break;
            case 6:
                printf("Have a nice Saturday\n");
                break;
            case 7:
                printf("Have a nice Sunday\n");
                break;
            case 0:
                printf("Shutting Down\n");
                d=0;
                break;
            default:
                printf("Invalid Input, try again\n");
                break;
        }
    }
    */



    /*
    //Objective_4
    int cases;
    float a,b,c,H,S1,S2,check;
    printf("Enter the sides of the triangle:\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("Enter 1 to check isosceles triangle\n");
    printf("Enter 2 to check right triangle\n");
    printf("Enter 3 to check equilateral triangle\n");
    printf("Enter 0 to exit the program\n");
    scanf("%d",&cases);
    switch(cases)
    {
        case 1:
        {
            if (((a==b) && (a!=c)) || ((b==c) &&(b!=a)) || ((c==a) && (c!=b)))
            printf("The triangle is isosceles in nature");
            else
            printf("The triangle is not isosceles in nature");

            break;
        }
        case 2:
        {
            if (a>b)
            {
                if (a>c)
                {
                    H=a;
                    S1=b;
                    S2=c;
                }
                else
                {
                    H=c;
                    S1=a;
                    S2=b;
                }
            }
            else
            {
                if (b>c)
                {
                    H=b;
                    S1=a;
                    S2=c;
                }
                else
                {
                    H=c;
                    S1=a;
                    S2=b;
                }
                
            }
            check = (H*H)-(S1*S1)-(S2*S2);
            if (check==0.0)
                printf("The triangle is right angled\n");
            else
                printf("The triangle is not right angled");

            break;
        }
        case 3:
        {
            if(a==b && b==c && c==a)
            printf("The triangle is equilateral");
            else
            printf("The triangle is equilateral");

            break;
        }
        case 0:
        printf("Signing off");
        break;

    }
    */


    /*
    //Objective_5
    int var;
    printf("Enter an integer of one digit\n");
    scanf("%d",&var);
    switch (var)
    {
        case 1:
            printf("good");
            break;
        case 2:
            printf("better");
            break;
        case 3:
            printf("best");
            break;
        default:
            printf("invalid");
            break;
    }
    */


   /*
   //Objective_6
   int y,type;
   printf("Enter a year");
   scanf("%d",&y);
   if((y%4 == 0) && (y%100 != 0))
   {
    type = 1;
   }
   if(y%100==0)
   {
    type = 2;
   }
   if(y%4 != 0)
   {
    type = 3;
   }
   switch(type)
   {
    case 1:
    {
        printf("The entered year is leap year");
        break;
    }
    case 2:
    {
        printf("The entered number is not a leap year");
        break;
    }
    case 3:
    {
        if(y%400 == 0)
        {
            printf("The entered year is a leap year");
        }
        else
        {
            printf("The entered year is not a leap year");
        }
        break;
    }
   }
   */

    /*
    //Objective_7
    int unit,catgry=0;
    float bill;
    printf("Enter the total number of consumed units");
    scanf("%d",&unit);
    if(unit<=50)
        catgry=1;
    if(unit>50 && unit<=150)
        catgry=2;
    if(unit>150 && unit<=250)
        catgry=3;
    if(unit>250)
        catgry=4;
    switch(catgry)
    {
        case 1:
        {
            bill= 1.2 * 0.5 * unit;
            break;
        }
        case 2:
        {
            bill = 1.2 * ((50*0.5) + (0.75*(unit-50)));
            break;
        }
        case 3:
        {
            bill = 1.2 * ((50*0.5) + (0.75*100) + (1.2*(unit-150)));
            break;
        }
        case 4:
        {
            bill = 1.2 * ((50*0.5) + (0.75*100) + (1.2*100) + (1.5*(unit-250)));
            break;
        }
    }
    printf("Hence the total bill of the customer is Rs.%f",bill);
    */


    /*
    //Objective_8
    int n,c;
    printf("Enter a number");
    scanf("%d",&n);
    if(n>=0)
    c=1;
    if(n<0)
    c=2;
    switch(c)
    {
        case 1:
        {
            printf("The number is positive and its negative is %d", (-1*n));
            break;
        }
        case 2:
        {
            printf("The number is negative and its positive is %d", (-1*n));
            break;
        }
    }
    */


    /*
    //Objective_9
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    switch (n%2==0)
    {
        case 0:
            printf("The entered number is already an odd number,i.e. %d",n);
            break;
        case 1:
            printf("The upper odd number is %d",n+1);
            break;
    }
    */


    /*
    //Objective_10
    int a,b,c;
    float D,R1,R2;
    printf("Enter the a,b & c parameter of the quadratic equation\n");
    scanf("%d %d %d",&a,&b,&c);
    D = (b*b) - (4*a*c);
    switch (D>=0)
    {
        case 0:
            printf("The real root is not possible for this equation ");
            break;
        case 1:
            {
                R1 = ((-b)+sqrt(D))/(2*a);
                R2 = ((-b)-sqrt(D))/(2*a);
                printf("The roots of the equaiton are %f and %f",R1,R2);
                break;
            }
    }
    */


    return 0;
}
