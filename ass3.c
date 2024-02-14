//Q1)
//strong

/*
#include <stdio.h>
int main(){
    int n ,q ,mod ,res =0; 
printf("enter num");
scanf("%d",&n);
q=n;
while(q !=0){
   mod =q%10;
   res = res +fac(mod);
   q =q/10;
}
if(res ==n){
    printf("strong");
}
else{
    printf("not strong");
}

} 

int fac( int n){
     if (n == 0 || n == 1) {
        return 1;
    }
     else
    {
        return n * fac(n - 1);
    }
}
*/

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//Q2)
//palindrome
/*
#include <stdio.h>
int main(){

  int n , q, res =0,rem;
 printf("inter the number");
 scanf("%d",&n);
 n=q;
 while( q !=0){
 rem = q% 10;
 res =res *10 +rem;
 q =q/10;
 }
 if(res = n){
    printf("is palindrom");
 }
 else{
    printf("is not");
 }  
    
}

*/

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//Q3)
//pyramid
/*
#include <stdio.h>
int main(){
    int n ,q;

    printf("enter n of rows");
    scanf("%d",&n);
    q=n;
    for(int i =0; i<n ;i++){
        for(int j=q ;j>0 ;j--)
        {
            printf("*");
          
        }
        printf("\n");
          q-- ;
       

    }
}
*/


//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//Q4)

/*
#include <stdio.h>

int main(){
    int n, s, res;
    char op;

    printf("Enter the numbers: ");
    scanf("%d %c %d", &n, &op, &s);

    switch (op) {
        case '+':
            res = n + s;
            printf("%d\n", res);
            break;
        case '-':
            res = n - s;
            printf("%d\n", res);
            break;
        case '*':
            res = n * s;
            printf("%d\n", res);
            break;
        case '/':
            if (s == 0) {
                printf("Invalid divisor\n");
                return 0;
            } else {
                res = n / s;
                printf("%d\n", res);
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    
}
*/


//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//Q5)

/*
#include <stdio.h>
int main(){
int pass =1234;
int n;
printf("enter the pass:\t");
scanf("%d",&n);
while(n != pass){
printf("wrong pass renter the pass :\t");
scanf("%d",&n);
}
printf("correct pass");

}


*/

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//Q6)

/*
#include <stdio.h>
int main(){
    int n;
    printf("enter a num");
    scanf("%d",&n);
    for(int i=0;i<100;i++){
        if(i%n==5){
            printf("%d \t",i);
        }
        else{
            continue;
        }
    }
}
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
#include <stdio.h>
int main(){

    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        for(int j =1;j<5;i++){
            if(arr[i]<arr[j]){
                continue;
            }
            else{
                int temp;
                arr[i]=temp;
                arr[i]=arr[j];
                arr[j]=temp;
                
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
}

