#include<stdio.h>
#include<string.h>

int obj_1(char []);
char * obj_2(char []);
void obj_3(char [],char []);
char * obj_4(char []);
char * obj_5(char []);
void obj_6(char []);
void obj_7(char []);
int obj_8(char []);
void obj_9(char []);
void obj_10(char []);



int main()
{
    /*
    printf("Objective_1\n");
    int count=0,i;
    char len[20]="Saurabh sir";
    printf("The entered string has length: %d",obj_1(len));
    */
    


    /*
    printf("Objective_2\n");
    int count=0,i,j=0;
    char rev[20]="Saurabh sir",*loc;
    printf("The entered string in reverse sequence is: \n");
    loc = obj_2(rev);
    for (i=0;rev[i];i++)
    {
        printf("%c ",*loc);
        loc = loc+1;
    }
    */
    

    /*
    printf("Objective_3\n");
    char first[20]= "India", second[20]="Myanmar";
    obj_3(first,second);
    */

    
    /*
    printf("Objective_4\n");
    char inpt_string[50]= "learning cpp for building career";
    printf("The entered sentence is: \n%s",inpt_string);
    printf("\nThe upper case of the entered string is: \n%s",obj_4(inpt_string));
    */
    

    /*
    printf("Objective_5\n");
    char inpt_string[50]= "LEARNING CPP FOR BUILDING CAREER";
    printf("The entered sentence is: \n%s",inpt_string);
    printf("\nThe lower case of the entered string is: \n%s",obj_5(inpt_string));
    */
    

    
    /*
    printf("Objective_6");
    
    char alpha_num[20] = "UP 65 DQ 2487";
    obj_6(alpha_num);
    */


    /*
    printf("Objective_7\n");
    char wrd[20] = "ABCBA";
    obj_7(wrd);
    */
    


    /*
    printf("Objective_8\n");
    char chck_words[20]="Saurabh sir";
    printf("The number for words in the entered sentence is:\n%d",obj_8(chck_words));
    */


    /*
    printf("Objective_9\n");
    char chck_words[50]="I am an INDIAN";
    obj_9(chck_words);
    //printf("The number for words in the entered sentence is:\n",obj_9(chck_words));
    */

    
    /*
    printf("Objective_10\n");
    char chck_words[50]="we are the indians";
    obj_10(chck_words);
    */

   return 0;
}



//Function definitions

int obj_1(char A[])
{
    int count,i;

    for (i=0;A[i];i++)
    {
        count =count+1;
    }

    return count;
}


char * obj_2(char rev[])
{
    int i,count=0;
    char rev_2[20] = "";
    for (i=0;rev[i];i++)
    {
        count =count+1;
    }
    printf("The entered string has length: %d\n",count);
    for (i=(count-1);i>=0;i--)
    {
        rev_2[(count-1)-i] = rev[i];
    }
    for (i=0;i<count;i++)
    {
        rev[i] = rev_2[i];
    }
    //printf("%s",rev);

    return rev;
}


void obj_3(char FIRST[],char SECOND[])
{
    int r;
    r = strcmp(FIRST,SECOND);
    if(r==0)
    {
        printf("The entered strings are equal");
    }
    if(r==1)
    {
        printf("The entered strings are opposite of dictionary");
    }
    if(r==-1)
    {
        printf("The entered strings are in the order of dictionary");
    }
}

char * obj_4(char A[])
{
    return (strcpy(A,strupr(A)));
}


char * obj_5(char A[])
{
    int i;
    for (i=0;A[i];i++)
    {
        if ((A[i]>=65) && (A[i]<=90))
        {
            A[i] = A[i] + 32;
        }
    }

    //return (strcpy(A,strlwr(A)));
    return A;
}

void obj_6(char alpha_num[])
{
    int i,alpha_count=0,num_count=0;

    for (i=1;alpha_num[i];i++)
    {
        if ((alpha_num[i]>=95 && alpha_num[i]<=122) || (alpha_num[i]>=65 && alpha_num[i]<= 90))
        {
            alpha_count = alpha_count+1;
        }
        if (alpha_num[i]>=48 && alpha_num[i]<=57)
        {
            num_count = num_count+1;
        }
    }
    if (num_count>=1 && alpha_count>=1)
    {
        printf("\nThe entered string is an alphanumeric string");
    }
    else
    {
        printf("\nThe entered string is NOT an alphanumeric string");
    }
}

void obj_7(char wrd[])
{
    int i,count=0,flag=0;
        for (i=0;wrd[i];i++)
        {
            count =count+1;
        }
        printf("The entered string has length: %d\n",count);
        i=0;
        while (i < (count/2))
        {
            if(wrd[i] == wrd[(count-1)-i])
            {
                i = i+1;
            }
            else
            {
                flag = 1;
                printf("\nThe entered word is NOT a palindrome");
                break;
            }
        }
        if (flag==0)
        {
            printf("\nThe entered word is a palindrome");
        }
}

int obj_8(char sentence[])
{
    int wrd_count=0,i;

     for (i=0;sentence[i];i++)
    {
        if (sentence[i] == 32)
        {
            wrd_count = wrd_count+1;
        }
        
    }
    wrd_count = wrd_count+1;

    return wrd_count;
}

void obj_9(char rev_sent[])
{
    int wrd_count=0,i,t=0,count=0,j,k,l,m=0;
    int temp[10] = {0};
    char rev_sent1[20]="";
    for (i=0;rev_sent[i];i++)
    {
        if (rev_sent[i] == 32)
        {
            t = t+1;
            temp[t] = i+1;
            wrd_count = wrd_count+1;
        }
        count = count+1;
    }
    wrd_count = wrd_count+1;

    for (j=(wrd_count-1);j>=0;j--)
    {
        k=temp[j];
        for (l=m;(rev_sent[k] && rev_sent[k]!=32);l++)
        {
            rev_sent1[l] = rev_sent[k];
            k = k+1;   
        }
        rev_sent1[l] = 32;
        m = l+1;
    }
    printf("%s\n",rev_sent1);
}


void obj_10(char A[])
{
    int I,J=0,K,sim_count[25]={0},N=0,M,sim_temp;
    char rev_2[20] = "",sim_coll[150]="",coll[150]="";
    
    for (I=0;A[I];I++)
    {
        N = N+1;
    }
    printf("The entered string has length: %d\n",N);

    for (I=0;I<N;I++)
    {
        J = (I+1);
        //for (J=(I+1);J<8;J++)
        while(J<N)
        {
            if (A[I]==A[J] && A[I]!=32)
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

           J = J+1;
        }

    }

    for(M=0;M<=160;M++)
    {
        /*
        if (M==0)
        {
            printf("\n%d appears %d times \n",M,sim_count[M]);
        }
        */
        
        if ((sim_coll[M]>=97 && sim_coll[M]<=122) || (sim_coll[M]>=65 && sim_coll[M]<=90))
        {
            coll[M]=sim_coll[M];
            printf("%c appears %d times \n",coll[M],sim_count[M]);
        }    
    }
}
