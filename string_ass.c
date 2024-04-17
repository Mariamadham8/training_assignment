

//q1)
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
   printf("enter the string: \n");
   scanf("%s",st);
   printf("the string you entered is :%s",st);

}
*/

//************************************************************************

//q2)
/*
#include<stdio.h>
#include<string.h>
int main()
{
   char st[100];
   int i=0 ,counter=0;
   printf("enter the string: \n");
   scanf("%s",st);
   while(st[i] !='\0')
   {
    counter++;
      i++;
   }
   printf("len of the string =%d\n",counter);

}
*/

//****************************************************************

//q3)

/*
#include<stdio.h>
#include<string.h>
 void separate(char arr[]);
int main()
{
   char st[100];
   int i=0 ,counter=0;
   printf("enter the string: \n");
   fgets(st,100,stdin);
   separate(st);
}
 void separate(char arr[])
 {
    int i=0;
    printf("the characters of the string are :");
    while(arr[i] !='\0')
    {
        if(arr[i]==' ')
        {
            i++;
            continue;
        }
        else{
        printf("%c ",arr[i]);
        i++;
        }
        
    
    }
 }

 */
 //*************************************************************************
 //q4)

/*
#include<stdio.h>
#include<string.h>
#include <ctype.h>
 
int main()
{
    //i set c-count to -1 cause the \n fgets add  
   char st[100];
   int v_count = 0, c_count = -1, d_count = 0, white_count = 0, i = 0;
   printf("enter the string: \n");
   fgets(st,100,stdin);
   while(st[i] !='\0')
   {
    switch(tolower(st[i]))
    {
           case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
        v_count++;
        break;
        case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0':
        d_count++;
        break;
        case ' ':
        white_count ++;
        break;
        default :
        c_count ++;
        break;
    }
    i++;
   }
   printf("vowels=%d\n\
consontants=%d\n\
digits=%d\n\
white spaces=%d\n",v_count,c_count,d_count,white_count);

}
*/
//***************************************************************************
//q5)

/*
#include<stdio.h>
#include<string.h>
int main()
{
      int i=0;
   char st[100];
   printf("enter the string: \n");
   fgets(st,100,stdin);
   printf("the string you enter:");
   while(st[i] !='\0')
   {
      if((st[i]>=97 && st[i]<=122 )||(st[i]>=65 && st[i]<=90 ) )
       {
        printf("%c",st[i]);
       i++;
       } 
       else
       {
         i++;
          continue;
       }
   
   
   }
}
*/
