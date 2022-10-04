#include<stdio.h>
//#include<stdlib.h>

int obj_1(int[],int);
int obj_2(int[],int);
int * obj_3(int[],int);
int * obj_4(int[],int,char);
int obj_5(int[],int);
void obj_6(int[],int);
int obj_7(int[],int);
int obj_8(int[],int);
void obj_9(int[],int[]);
void obj_10(int[],int);

int main()
{
    /*
    printf("Objective_1\n");
    int a[20]={0},terms,i,g;
    printf("Enter the number of contents of the array\n");
    scanf("%d",&terms);
    printf("Enter the numbers in the array\n");

    for (i=0; i<=(terms-1);i++)
    {
        scanf("%d",&a[i]);
    }

    g = obj_1(a,terms);
    printf("The greatest number is: %d",g);
    */


    /*
    printf("Objective_2\n");
    int a[20]={0},terms,i,s;
    printf("Enter the number of contents of the array\n");
    scanf("%d",&terms);
    printf("Enter the numbers in the array\n");

    for (i=0; i<=(terms-1);i++)
    {
        scanf("%d",&a[i]);
    }

    s = obj_2(a,terms);
    printf("The smallest number is: %d",s);
    */


    /*
    printf("Objective_3\n");
    int i=0,*temp,elements=0,a[20]={0};
    printf("Enter the number of elements to be added\n");
    scanf("%d",&elements);
    printf("Enter the content of the array: \n");
    for (i=0;i<elements;i++)
    {
        scanf("%d",&a[i]);
    }
    
    temp = obj_3(a,elements);
    for (i=0;i<elements;i++)
    {
        printf("%d ",*temp);
        temp = temp+1;
    }
    */
    

    /*
    printf("Objective_4\n");
    int i,*temp,n=0,a[5]={1,2,3,4,5};
    char d;
    printf("Enter the direction to rotate, i.e. L for left and R for right\n");
    scanf("%c",&d);
    printf("Enter n, i.e. for how many position to be shifted\n");
    scanf("%d",&n);
    temp = obj_4(a,n,d);
    for (i=0;i<5;i++)
    {
        printf("\n%d ",*temp);
        temp = temp+1;
    }
    */

    /*
    printf("Objective_5\n");
    int a[20] = {0},terms=0,i;
    printf("Enter the number of terms: ");
    scanf("%d",&terms);
    printf("\nEnter the elements of the array\n");
    for (i=0;i<terms;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe first repetitve element in adjacent is: %d",obj_5(a,terms));
    */

    /*
    printf("Objective_6\n");
    int a[100] = {2,1,3,5,7,98,5,4,3,5,7,8,6,4,3,23,4,5,7,78,8,8,8},b[100]={0},n,i;
    printf("Enter the number of values, i.e. n, to be read: ");
    scanf("%d",&n);
    obj_6(a,n);
    */

    
    /*
    printf("Objective_7\n");
    int a[100] ={4,7,5,6,5,3,3,2,4,5,3,2,1,4,6,7,8,9,0,8,6,5,4,3,3,2},count=0;
    count = obj_7(a,10);
    printf("\nThe number of duplicate elements are: %d",count);
    */

    /*
    printf("Objective_8\n");
    int a[100] ={1,5,4,2,3,4,6,8,6,4,3,2,1,4,6,7,8,9,0,8,6,5,4,3,3,2},count=0;
    count = obj_8(a,10);
    printf("\nThe number of distinct elements are: %d",count);
    */
   

    /*
    printf("Objective_9\n");
    int a[10] ={1,5,4,2,3,4,6,8,6,4},b[10]={3,2,1,4,6,7,8,9,0,8},i,*c;
    obj_9(a,b);
    */
 
    /*
    printf("Objective_10\n");
    int N;   //nUMBER OF TERMS IN THE ARRAY TO BE PASSED
    //int a[25] ={1,5,4,2,3,4,6,8,6,4,4,3,2,9,4,3,7,1,9,8,6,4,3,3,5};
    //int a[12] = {1,4,8,0,9,6,4,2,1,5,4,4};
    //int a[5] ={1,2,2,2,9};
    //int a[10] = {1,1,2,2,3,3,4,1,8,1};
    //int a[7] ={1,2,3,1,1,1,1};
    obj_10(a,N);
    */
    
    return 0;
}



//Defining Funtions

//Function_1
int obj_1(int A[],int N)
{
    int G = A[0],I;
    for (I=1;I<N;I++)
    {
        if (A[I]>G)
        {
            G = A[I];
        }
    }
    return G;

}


//Function_2
int obj_2(int A[],int N)
{
    int S = A[0],I;
    for (I=1;I<N;I++)
    {
        if (A[I]<S)
        {
            S = A[I];
        }
    }
    return S;

}


//Function_3
int * obj_3(int a[],int N)
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

    //return &a[0];
    return a;
}


//Function_4
int * obj_4(int A[],int N, char D)
{
    int i,j,B[5]={0};


    if (N>4)
    {
        N = N%4;
    }

    if ('R' == D)
    {
        for (i =0;i<=4;i++)
        {
            j = i+N;
            if (j>4)
            {
                j = j-5;
                B[j] = A[i];

            }
            if (j<=4)
            {
                B[j] = A[i];
            
            }
        }
    }

    if ('L' == D)
    {
        for (i =0;i<=4;i++)
        {
            j = i-N;
            if (j<0)
            {
                j = 5+j;
                B[j] = A[i];

            }
            if (j>=0)
            {
                B[j] = A[i];
            
            }
        }
    }
    for (i=0;i<=4;i++)
    {
        A[i] = B[i];
    }
    return A;
}


//Function_5
int obj_5(int A[],int TERMS)
{
    int J=0,D=0;
    for(J=0;J<(TERMS-1);J++)
    {
        if (A[J] == A[J+1])
        {
            D = A[J];
            break;
        }
    }
    printf("%d",D);
    return D;
}


//Function 6
void obj_6(int A[],int N)
{
    int B[100]={0},I;
    for(I=0;I<N;I++)
    {
        B[I] = A[I];
    }
    printf("The entered with %d elements with reverse order is:\n");
    for(I=(N-1);I>=0;I--)
    {
        printf(" %d",B[I]);
    }
}

//Function 7
int obj_7(int A[],int N)
{
    int I,J,K,COUNT=0;
    for (I=0;I<(N-1);I++)
    {
        for (J=(I+1);J<N;J++)
        {
            if (A[I]==A[J])
            {
                for (K=(I-1);K>=0;K--)
                {
                    if (A[I] == A[K])
                    {
                        break;
                    }  

                    if (K==0)
                    {
                        COUNT = COUNT+1;
                    }
                }
                COUNT = COUNT+1;
                break;
            }
        }
    }
    return COUNT;
}

//Function 8
int obj_8(int A[],int N)
{
    int I,J,K,COUNT=0;
    for (I=0;I<N;I++)
    {
        for (J=(I+1);J<N;J++)
        {
            if (A[I]==A[J])
            {
                break;
            }

            if (J==(N-1))
            {
                if (I==0)
                {
                    COUNT = COUNT+1;
                }
                for (K=(I-1);K>=0;K--)
                {
                    if (A[I] == A[K])
                    {
                        break;
                    }

                    if (K==0)
                    {
                        COUNT = COUNT+1;
                    }
                }
            }
        }
    }
    return COUNT;
}


//Function_9
void obj_9(int A[],int B[])
{
    int I,i,k,j,temp;
    for (I=9;I<19;I++)
    {
        A[I] = B[I-9];
    }

    i=1;
    while(i<=19)
    {
        if (A[i]>A[i-1])
        {
            k=i;
            for(j=k-1;j>=0;j--)
            {
                if(A[k]>A[j])
                {
                    temp = A[j];
                    A[j]=A[k];
                    A[k]=temp;
                    k=k-1;
                }
            }
        }
        i++;
    }
    printf("The numbers in descending order are:\n");
    for(i=0;i<=19;i++)
    {
        printf("%d ",A[i]);
    }
}


void obj_10(int A[],int N)
{
    int I,J=0,K,sim_count[25]={0},diff_count[25]={0},sim_coll[25]={0},diff_coll[25]={0},sim_temp,diff_temp,M,coll[10]={0};

    for (I=0;I<N;I++)
    {
        J = (I+1);
        //for (J=(I+1);J<8;J++)
        while(J<N)
        {
            if (A[I]==A[J])
            {
                if (I==0)
                {
                    sim_temp = A[I];
                    sim_coll[sim_temp] = A[I];
                    sim_count[sim_temp] = sim_count[sim_temp]+1;
                }

                for (K=(I-1);K>=0;K--)
                {
                    if (A[I]==A[K])
                    {
                        break;
                    }  

                    if (K==0)
                    {
                        sim_temp = A[I];
                        sim_coll[sim_temp] = A[I];
                        sim_count[sim_temp] = (sim_count[sim_temp])+1;
                    }
                }

                sim_temp = A[I];
                sim_coll[sim_temp] = A[I];
                sim_count[sim_temp] = sim_count[sim_temp]+1;
                break;
            }
            else
            {
                if (J==(N-1))
                {
                    if (I==0)
                    {
                        diff_temp = A[I];
                        diff_coll[diff_temp] = A[I];
                        diff_count[diff_temp] = diff_count[diff_temp]+1;
                    }
                    else
                    {
                        for (K=(I-1);K>=0;K--)
                        {
                            if (A[I] == A[K])
                            {
                                break;
                            }

                            if (K==0)
                            {
                                diff_temp = A[I];
                                diff_coll[diff_temp] = A[I];
                                diff_count[diff_temp] = diff_count[diff_temp]+1;
                            }
                        }
                    }
                }
            }
           J = J+1;
        }

        if (I==(N-1))
        {
            for (K=(I-1);K>=0;K--)
                {
                    if (A[I]==A[K])
                    {
                        break;
                    }  

                    if (K==0)
                    {
                        diff_temp = A[I];
                        diff_coll[diff_temp] = A[I];
                        diff_count[diff_temp] = diff_count[diff_temp]+1;
                    }
                }

        }
    }


    for(M=0;M<=9;M++)
    {
        if (M==0)
        {
            printf("\n%d appears %d times \n",M,sim_count[M]+diff_count[M]);
        }
        
        if (sim_coll[M]!=0)
        {
            coll[M]=sim_coll[M];
            printf("%d appears %d times \n",coll[M],sim_count[M]);
        }
        
        if (diff_coll[M]!=0)
        {
            coll[M]=diff_coll[M];
            printf("%d appears %d times \n",coll[M],diff_count[M]);
        }     
    }
}