#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;



void obj_1(int);
int obj_2(int);
int obj_3(int,int);
void obj_4(int [],int);
void obj_5(int);
void obj_6(int *,int *);
int obj_7(int,int);
int obj_7(int,int,int);
void obj_8(float);
void obj_8(float,float);
void obj_8(float,float,float);
float obj_9(float,float);
float obj_10(float,float);



int main()
{

    /*
    cout<<"Objective_1"<<endl;
    int N;
    cout<<"Enter a number:";
    cin>>N;
    obj_1(N);
    */

    /*
    cout<<"Objective_2"<<endl;
    int N,R;
    cout<<"Enter a number:";
    cin>>N;
    R = obj_2(N);
    cout<<"The highest digit in the entered number is "<<R;
    */


    /*
    cout<<"Objective_3"<<endl;
    int N,P,val;
    cout<<"Enter a number and its power respectively:"<<endl;
    cin>>N>>P;
    val = obj_3(N,P);
    cout<<"The value of N raised to the power P is "<<val;
    */


    /*
    cout<<"Objective_4"<<endl;
    int L,c[25]={0};
    cout<<"Enter the number of lines of the pascal triangle"<<endl;
    cin>>L;
    obj_4(c,L);
    */
    

    /*
    cout<<"Objective_5"<<endl;
    int N;
    cout<<"Enter the number, N, to be checked its presence in Fibonnaci series:"<<endl;
    cin>>N;
    obj_5(N);
    */



    /*
    cout<<"Objective_6"<<endl;
    int *a,*b,i,j;
    i = 100;
    j = 150;
    a = &i;
    b = &j;
    //scanf("%c \n %c",&i,&j);
    cout<<"The number before swapping,i:"<<i<< " and j:"<<j<<endl;
    obj_6(a,b);
    cout<<"The number before swapping,i:"<<i<< " and j:"<<j<<endl;
    */



    /*  
    cout<<"Objective_7"<<endl;
    int a,b,c;
    cout<<"enter the three numbers to perform addition operation on them"<<endl;
    cin>>a>>b>>c;
    cout<<"calling the function with same name but different in number of input argumnents"<<endl;
    cout<<"First passing two arguments"<<endl;
    cout<<"The sum of two numbers are:"<<obj_7(a,b)<<endl;
    cout<<"Now passing the three arguments"<<endl;
    cout<<"The sum of two numbers are:"<<obj_7(a,b,c);
    */


    /*
    cout<<"Objective_8"<<endl;
    float r,l,b,s1,s2,s3;
    cout<<"enter the radius(int) of the circle"<<endl;
    //cin>>r;
    cout<<"enter the length(int) and breadth(int) of the rectangle"<<endl;
    //cin>>l>>b;
    cout<<"enter all the sides of the traingle "<<endl;
    cin>>s1>>s2>>s3;
    cout<<"calling the function with same name but different in number of input argumnents"<<endl;
    cout<<"First calculating the area of the circle"<<endl;
    //obj_8(r);
    cout<<"\nNow calculating the area of the rectangle"<<endl;
    //obj_8(l,b);
    cout<<"\nNow calculating the area of a traingle using Heron's formula"<<endl;
    obj_8(s1,s2,s3);
    */


    /*
    cout<<"Objective_9"<<endl;
    float a,b;
    cout<<"Enter both the numbers: "<<endl;
    cin>>a>>b;
    cout<<"The greater of the entered number is: "<<obj_9(a,b);
    */

    
    /*
    cout<<"Objective_10"<<endl;
    float a,b;
    cout<<"Enter both the numbers: "<<endl;
    cin>>a>>b;
    cout<<"The sum of the entered number is: "<<obj_10(a,b);
    */

    return 0;
}





//Defining Functions

//Function_1
void obj_1(int n)
{
    int d=1,g=1,p=0;

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
    cout<<"The number is 0, not a prime";

    if (p==1)
    cout<<"The number is 1, not a prime";
    if (p==2)
    cout<<"The number "<<g<<" is a prime";
    if (p>2)
    cout<<"The number "<<g<<" is not prime";
}


//Function_2
int obj_2(int n)
{
    int d=10,no=1,i,nx=0,r,temp[10]={0},count=0,g;

    //'for' loop for finding the number of digits
    if (n>9)
    {
        while(n/d!=0)
        {
            d = d*10;
            no+=1;
        }
    }
    else
    r = n;
    count = no;
    cout<<"The number of digits is "<<no<<endl;

    //for loop for reversing the number
    for(no;no>=1;no--)
    {
        i = n%10;
        temp[nx] = i;
        n = n/10;
        nx = nx+1;
    }

    r = temp[0];
    for(i=0;i<count;i++)
    {
        if(temp[i+1]>temp[i])
        {
            r = temp[i+1];
        }
    }

    return r;
}


//Function_3
int obj_3(int n,int p)
{
    int r=1,i;
    for (i=0;i<p;i++)
    {
        r = r*n;
    }

    return r;
}




//Function_4
void obj_4(int c[],int L)
{
    int E,M,i,j;

    M = L-1;
    E=(2*L)-1;

    for (i=0;i<=M;i++)
    {
        //cout<<i<<" ";
        for (j=0;j<E;j++)
        {
            if (j<M-i || j>M+i)
                printf("%3c",32);
            else
            {
                if(j==(M-i) || j==(M+i))
                {
                    c[j]=1;
                    printf("%3d",c[j]);
                }
                else
                {
                    if(L%2==0)
                    {
                        if (i%2==0)
                        {
                            if (j%2!=0)
                            {
                                c[j]= c[j-1]+c[j+1];
                                printf("%3d",c[j]);
                            }
                            else
                                printf("%3c",32);
                        }
                        else
                        {
                            if (j%2==0)
                            {
                                c[j]= c[j-1]+c[j+1];
                                printf("%3d",c[j]);
                            }
                            else
                                printf("%3c",32);

                        } 
                    }
                    else
                    {
                        if (i%2==0)
                        {
                            if (j%2==0)
                            {
                                c[j]= c[j-1]+c[j+1];
                                printf("%3d",c[j]);
                            }
                            else
                                printf("%3c",32);

                        }
                        else
                        {
                            if (j%2!=0)
                            {
                                c[j]= c[j-1]+c[j+1];
                                printf("%3d",c[j]);
                            }
                            else
                                printf("%3c",32);
                        }
                    }
                }
            }
        }
        cout<<endl;
    }
}

//Function_5
void obj_5(int N)
{

    int a,f=1,nx=1;
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
}



//Function_6
void obj_6(int *A,int *B)
{
    int temp;
    temp = *B;
    *B = *A;
    *A = temp;
}




//Function_7
int obj_7(int A, int B)
{
    return (A+B);
}

int obj_7(int A, int B, int C)
{
    return (A+B+C);
}


//Function_8
void obj_8(int R)
{
    cout<<"Area of the circle is: "<<(3.14*R*R);
}

void obj_8(int L,int B)
{
    cout<<(L*B);
}

void obj_8(float S1,float S2,float S3)
{
    float S,P;
    S = (S1+S2+S3)/2;
    P = sqrt(S*(S-S1)*(S-S2)*(S-S3));
    cout<<P;
    //printf("%0.2f",P);
}

//Finction_9
float obj_9(float A, float B)
{
    cout<<"Float";
    if (A>B)
    {
        return A;
    }
    else
    {
        return B;
    }
}

//Function_10
float obj_10(float A, float B)
{
    return (A+B);
}