//Q1)
//print the min hours sec the idea to assign values after calcutate it!!
/*
#include<stdio.h>
void splitSeconds(long total_sec, int *hr, int *min, int *sec){
    int hours, minutes, seconds;
    hours = total_sec / 3600;
    minutes = (total_sec % 3600) / 60;
    seconds = total_sec % 60;
   
    *hr = hours;
    *min = minutes;
    *sec = seconds;
}
int main(){
    int total_sec, sec, hr, min;

    printf("Enter total seconds: ");
    scanf("%d", &total_sec);
    splitSeconds(total_sec, &hr, &min, &sec); 
    printf("hours: %d, minutes: %d, seconds: %d\n", hr, min, sec);
    return 0;
}
*/
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//Q2)
/*
#include<stdio.h>

int div(int num1,int num2,int *result){
    if(num2==0){
      return 0;
    }
    else{
    *result =num1/num2;
   return 1;
    }
 
}
int main(){
   int n=4,y=8,result;
   div(y,n,&result);
   printf("result=%d",result);
   
}
*/
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//q3)
/*
#include<stdio.h>
char *find_first(char *str,char ch){
    int counter=0;
    while(*str!='\0'){
        if(*str==ch){
            return str;
        }
        str++;
    }
    return NULL;
}
int main(){
   char *arr="mariam";
   char ch='i';
   char *ptr=find_first(arr,ch);
    if (ptr != NULL)
        printf("f occurrence of %c found in  %ld\n", ch, ptr - arr);
    else
        printf("%c not found in the string.\n", ch);
    return 0;
}
*/
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//q4)
//calculator without condition :)



//no idea

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//q5)
//????

