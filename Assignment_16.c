#include<stdio.h>



int main()
{ 
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, b[3][3] = {{1,2,3},{4,5,6},{7,8,9}},i,j,s;
    printf("Entered matrix a[][] is:\n");
    for (i=0;i<3;i++)
    {
        printf("|");
        for (j=0;j<3;j++)
        {
            printf(" %2d ",a[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("Entered matrix b[][] is:\n");
    for (i=0;i<3;i++)
    {
        printf("|");
        for (j=0;j<3;j++)
        {
            printf(" %2d ",b[i][j]);
        }
        printf("|");
        printf("\n");
    }
    /*
    //Entering the matrix elements manually(if needed)
    printf("Enter the elements of both the matrices\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("\n");
            printf("Enter the (%d,%d) element of the first matrix a[][]:",i+1,j+1);
            scanf("%d",&a[i][j]);
            printf("Enter the (%d,%d) element of the second matrix b[][]:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    */
    


    /*
    printf("Objective_1");
    printf("Summing the two matrices\n");
    for (i=0;i<3;i++)
    {
        printf("|");
        for (j=0;j<3;j++)
        {
            printf(" %3d ",a[i][j]+b[i][j]);
        }
        printf("|");
        printf("\n");
    }
    */
    

    /*
    printf("Objective_2\n");
    int p,k,c[3][3]={{0}};
    for (i=0;i<3;i++)
    {
        printf("\n");
        printf("|");
        for (k=0;k<3;k++)
        {
            p=0;
            for (j=0;j<3;j++)
            {
                //printf("(%d*%d)",a[i][j],b[j][k]);
                //printf(" %d ",a[i][j]*b[j][k]);
                p = (p + (a[i][j]*b[j][k]));
            }
            c[i][k] = p;
            printf(" %4d ",c[i][k]);        
        }
        printf("|");  
    }
    */
    

    /*
    printf("\nObjective_3\n");
    printf("Transposing the matrix\n");
    int d[3][3]={{0}};
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            d[j][i] = a[i][j];
        }
        printf("\n");
    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf(" %d ",d[i][j]);
        }
        printf("\n");
    }
    */

    /*
    printf("\nObjective_4\n");
    printf("Summing the right diagonal elements of the matrix\n");
    int s_rd=0,A=0,B=2;
    for (i=0;i<3;i++)
    {      
        s_rd = s_rd  +a[A][B];
        A+=1;
        B-=1;
    }
    printf("%d",s_rd);
    */

    /*
    printf("\nObjective_5\n");
    printf("Summing the left diagonal elements of the matrix\n");
    int s_ld=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if(j==i)
            {
                s_ld = s_ld  +a[i][j];
            }
            
        }
    }
    printf("%d",s_ld);
    */


    /*
    printf("\nObjective_6\n");
    printf("Summing the columns and rows of the matrix\n");
    int col_mat[3]={0},row_mat[3]={0},col=0,row=0;
    for (i=0;i<3;i++)
    {
        col=0;
        row=0;
        for (j=0;j<3;j++)
        {
                col = col  + a[i][j];
                row = row  + a[j][i];      
        }
        col_mat[i] = col;
        row_mat[i] = row;
        printf(" %d ",col_mat[i]);
    }
    printf("\n");
    for (i=0;i<3;i++)
    {
        printf(" %d ",row_mat[i]);
    }
    */


    /*
    printf("\nObjective_7\n");
    printf("The lower traingle of the matrix\n");
    int l_trin[3][3]={{0}};
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if(j<=i)
            { 
                l_trin[i][j] = a[i][j];
                printf(" %d ",l_trin[i][j]);
            }
        }
         printf("\n");
    }
    */


    /*
    printf("\nObjective_8\n");
    printf("The upper traingle of the matrix\n");
    int l_trin[3][3]={{0}};
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if(j<i)
            {
                printf("   ");
            }
            if(j>=i)
            { 
                l_trin[i][j] = a[i][j];
                printf(" %d ",l_trin[i][j]);
            }
        }
         printf("\n");
    }
    */
    

    
    /*
    printf("\nObjective_9");
    printf("\nChecking the sparsity of the matrix");
    int spar_mat[3][3]={{0}},spar=0,count=0;

    //Entering the matrix elements manually(if needed)
    printf("Enter the elements of the matrix spar_mat[][]\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("\n");
            printf("Enter the (%d,%d) element of the matrix spar_mat[][]:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The entered matrix, spar_mat[][] is \n");
    for (i=0;i<3;i++)
    {
        printf("\n");
        for (j=0;j<3;j++)
        {
            printf(" %2d ",a[i][j]);
            if(spar_mat[i][j]==0)
            {
                spar = spar+1; 
            }
            count = count+1;
        }
    }
    printf("\nThe number of zeros are: %d",spar);
    printf("\nThe total elements are: %d",count);
    if (spar >= ((2/3)*count))
    {
        printf("\nThe matrix is sparse matrix");
    }
    else
    {
        printf("\nThe matrix is not a sparse matrix");
    }
    */

    /*
    printf("\nObjective_10\n");
    printf("Finding the row with maximum ones in the matrix\n");
    int one_mat[3]={0},one=0,max=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if (a[i][j]==1)
            {
                one = one+1;
            }
            one_mat[i] = one;
        }
    }
    max = one_mat[0];
    for (i=1;i<3;i++)
    {
        if (one_mat[i]>max)
        {
            max = one_mat[i];
        }
    }
    printf("The row with maximum 1s is: %d",max);
    */

    
    







}