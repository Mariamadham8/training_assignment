/*
Q)1:
#include <stdio.h>
int main() {
    double temp;
    printf("%s\n", "Enter temperature: ");
    scanf("%lf", &temp);
    double celsius = (temp - 32) * (5.0 / 9.0);
    double kelvin = celsius + 273.15;
    printf("Temperature in Celsius: %f\n", celsius);
    printf("Temperature in Kelvin: %f", kelvin);

    return 0;
}
*/

/*
Q)2:
#include <stdio.h>
int main() {
       int seconds ;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
  int  hours = seconds / 3600;
     int minutes = (seconds % 3600) / 60;
     seconds = seconds % 60;
    printf("Converted time: %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
    return 0;
}
*/


/*
Q)3:
#include <stdio.h>
int main() {
    int a, b;
    int temp;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("a and b after swapping: %d %d\n", a, b);

    return 0;
}
*/

/*
  q)4:  
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);
 a = a + b;
    b = a - b;
    a = a - b;
 printf("a and b after swapping: %d %d\n", a , b);

    return 0;
    }
*/


/*
Q)5::
#include <stdio.h>
int main() 
{
  int a,b,c,temp;
  printf("please enter numbers");
 scanf("%d %d %d", &a, &b, &c);
  temp = a;
    a = c;
    c= temp;
    printf("the reversed intge =%d %d %d",a,b,c);
  return 0;
}
*/

