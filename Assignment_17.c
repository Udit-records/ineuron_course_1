#include<stdio.h>
#include<string.h>

int main()
{
    /*
    printf("Objective_1\n");
    int i,count=0;
    char s[100];
    printf("Enter the string\n");
    scanf("%s",&s);
    for (i=0;s[i];i++)
    {
        count = count+1;
    }
    printf("%d is the length of the entered string, %s",count,s);
    */


    /*
    printf("Objective_2\n");
    int i,count=0;
    char s[100],c;
    printf("Enter a string\n");
    scanf("%s",&s);
    printf("Enter the character to be searched\n");
    scanf(" %c",&c);
    for (i=0;s[i];i++)
    {
        if (c == s[i])
        {
            count = count+1;
        }
        
    }
    printf("%c occured %d times in the entered string, %s",c,count,s);
    */
    


    /*
    printf("Objective_3\n");
    int i,count=0;
    char s[100];
    printf("Enter a string\n");
    scanf("%s",&s);
    strcpy(s,strlwr(s));
    for (i=0;s[i];i++)
    {
        if ('a' == s[i] || 'e' == s[i] || 'i' == s[i] || 'o' == s[i] || 'u' == s[i])
        {
            count = count+1;
        }
        
    }
    printf("The entered string, %s has %d vowels\n",s,count);
    */

    /*
    printf("Objective_4\n");
    int i,count=0;
    char s[100];
    printf("Enter a string\n");
    scanf("%s",&s);
    printf("The entered string upper case %s",strupr(s));
    */

    /*
    printf("Objective_5\n");
    int i,count=0;
    char s[100];
    printf("Enter a string\n");
    scanf("%s",&s);
    printf("The entered string lower case %s",strlwr(s));
    */

    /*
    printf("Objective_6\n");
    int i,count=0,l;
    char s[100];
    printf("Enter the string\n");
    scanf("%s",&s);
    for (i=0;s[i];i++)
    {
        count = count+1;
    }
    printf("The entered string, %s has length %d\n",s,count);
    l = count-1;
    while (l>=0)
    {
        printf("%c",s[l]);
        l = l-1;
    }
    */

    
    /*
    printf("Objective_7\n");
    int i,num=0,alpha=0,spcl_chr = 0;
    char s[100];
    printf("Enter the string\n");
    scanf("%s",&s);
    for (i=0;s[i];i++)
    {
        if ((s[i]>=48) && (s[i]<=57))
        {
            num = num + 1;
        }
        if ((s[i]>=97 && s[i]<=122) || (s[i]>=65 && s[i]<=90))
        {
            alpha = alpha+1;
        }
        if ((s[i]>=32 && s[i]<=47) || (s[i]>=58 && s[i]<=64) || (s[i]>=123 && s[i]<=126) || (s[i]>=91 && s[i]<=96))
        {
            spcl_chr = spcl_chr + 1;
        }
    }
    printf("The string %s has %d numerics, %d alphabets and %d special characters",s,num,alpha,spcl_chr);
    */


    /*
    printf("Objective_8\n");
    char first[20],second[20];
    printf("Enter the first string: \n");
    scanf("%s",&first);
    strcpy(second,first);
    printf("The second is now %s",second);
    */

    
    /*
    printf("Objective_9\n");
    int k=0,i=0,j=0,temp,count=0;
    char a[20];
    printf("Enter the string: \n");
    scanf("%s",&a);
    for(i=0;a[i];i++)
    {
        count = count+1;
    }
    printf("The entered string has %d alphabets",count);
    i=1;
    while(i<=(count-1))
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
    printf("\nThe entered strings in increasing order are:\n");
    printf("%s",a);
    */
    

    /*
    printf("Objective_10\n");
    int i,j,count[128] = {0},flag[128] = {0};
    char s[100];
    printf("Enter a character string\n");
    scanf("%s",&s);
    for (i=0;s[i];i++)
    {
        for (j=0;j<=127;j++)
        {
            if (j == s[i])
            {
                count[j] = count[j] + 1;
                flag[j] = 1;
                break;
            }
        }
        
    }  

    for (j=0;j<=127;j++)
        {
            if (flag[j] == 1)
            {
                printf("%c comes %d times in the entered string\n",j,count[j]);
            }
            
        }
    
    */
    
    

    return 0;
}