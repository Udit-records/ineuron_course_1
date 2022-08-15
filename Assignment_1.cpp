#include<stdio.h>
#include<math.h>

int main()
{
    //Ojective_1
    printf("Hello");
    printf("\n\n");

    //Objective_2
    printf("Hello");
    printf("\nStudents");
    printf("\n\n");

    //objective_3
    printf("\"MySirG\"");
    printf("\n\n");

    //objective_4
    float R, A;
    scanf("%f", &R);
    A = 3.14 * R * R;
    printf("Area of circle is %f having the radius %f",A,R);
    printf("\n\n");

    //objective_5
    printf("%d",sizeof("String"));
    printf("\n\n");

    //objective_6
    printf("\"Hello , Amit Kumar\"");
    printf("\n\n");

    //objective_7
    printf("%%");
    printf("\n\n");

    //objective_8
    printf("\\n");
    printf("\n\n");

    //objective_9
    printf("\\\\");
    printf("\n\n");

    //objective_10
    int d,m,y;
    scanf("%d %d %d",&d, &m, &y);
    printf("User Input data format-\"%d/%d/%d\"\n",d,m,y);
    printf("Output format- \"Day-%d, Month-%d,Year-%d\"",d,m,y);
    printf("\n\n");

    //objective_11
    int H,M;
    scanf("%d %d",&H,&M);
    printf("User Input time format-\"%d:%d\"\n",H,M);
    printf("%d Hour and %d Minute",H,M);
    printf("\n\n");

    //objective_12
    int x = printf("ineuron");
    printf("\n");
    printf("%d",x);

    return 0;

}