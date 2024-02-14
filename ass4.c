//Q)1

/*
#include<stdio.h>

void avrd(int n, int q);
int main(){
int n,q;
printf("enter 2 num");
scanf(" %d %d " ,&n ,&q);
avrd(n,q);

}

void avrd(int n, int q){

double avr = (n+q) /2.0;
printf(" the avarge %lf",avr);


}
*/


//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//Q)2

/*
#include<stdio.h>


int max(int x,int y,int z,int w);
int min(int x,int y,int z,int w);

int main(){
int x,y,z,w;
printf("enter 4 num:\t");
scanf("%d %d %d %d",&x,&y,&z,&w);

int max_num =max(x,y,z,w);
int min_num =min(x,y,z,w);
printf("the max :%d ,the min:%d",max_num,min_num);

}
int max(int x,int y,int z,int w){

     int max_value = x;

    if (y > max_value) {
        max_value = y;
    }

    if (z > max_value) {
        max_value = z;
    }

    if (w > max_value) {
        max_value = w;
    }

    return max_value;
}

int min(int x,int y,int z,int w){

     int min_value = x;

    if (y < min_value) {
        min_value = y;
    }

    if (z < min_value) {
        min_value = z;
    }

    if (w < min_value) {
        min_value = w;
    }

    return min_value;
}
*/

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//Q)3

/*
#include <stdio.h>


unsigned long long factorial(int n);

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num); 
        printf("Factorial of %d = %llu\n", num, factorial(num));
}


unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
*/

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//Q)4
/*
#include <stdio.h>
#include <stdbool.h>

// Function prototype
bool isPrime(int num);

int main() {
    int start, end;

    // Taking input for the range
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    
    printf("Prime numbers in the range %d to %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

