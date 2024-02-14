
/*
Q1 – unsigned char x = 1;
Using bitwise Operators:
• set bit number 7
• clear bit number 7
• toggle bit number 7
• Read the 7's bit from number and then print it
*/

/*
#include <stdio.h>
int main() {
    unsigned char x = 1;
    x |= (1 << 6);
     printf("After setting bit 7: %u\n", x);
    x &= ~(1 << 6);
      printf("After clearing bit 7: %u\n", x);
    x ^= (1 << 6);
     printf("After toggling bit 7: %u\n", x);
    int bit7 = (x >> 6) & 1;
    printf("Value of bit 7: %d\n", bit7);

    return 0;
}
*/



/*Q2
unsigned char x = 128;
Using bitwise Operators:
• rotate left by 3 bits.
• then assign 128 to x
• rotate right by 3 bits.*/


// solve :: is like a cycle we got the bits from the left and place it in right
//so the bitwise operators will apply the idea 
// كئني ببدل ال3 بتس اللي علي الشمال مكان الخمسه اللي علي اليمين فهحفظ دول في متغير ودول فمتغير واجمعهم علي بعض
/*#include <stdio.h>
int main() {

  unsigned char x=128;
  int answer1 =(x << 3) | (x >> (8 - 3));
  printf(" the left rotation of x by 3 =%d \n",answer1);
  x=128;
  int answer2=(x >> 3) | (x << (8 - 3));
    printf(" the right rotation of x by 3 =%d \n",answer2);

 int a=b=c=1;
  return 0;

}
*/

