
//(arrays)
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//q1) sum pro
/*
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum =0;
     for(int i=0;i<n;i++){
        sum +=arr[i];
     }
     printf("sum :%d",sum);
}
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//q2) max num pro

/*
#include<stdio.h>
int max(int arr[],int n);
int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",max(arr,n));
}


int max(int arr[],int n)
{
      int Mnum;
  for(int i=0; i<n;i++){
    Mnum=arr[0];
    if(Mnum<arr[i]){
        Mnum =arr[i];
    }
  }
  return Mnum;
}
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//q3) reversed order pro
    /*
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int res[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for(int i = n - 1, j = 0; j < n && i >= 0; i--, j++) {
        res[j] = arr[i];
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }
}
*/
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//q4) avrdge of the conscutive elements
#include <stdio.h>
int main() {
     int n,x; 
  scanf("%d",&n);
  int arr[n];
   int avrg[x];
   if(n%2==0){
      x=(n/2)+1;
  }
  else{
      x=n-1;
   }
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
     for(int i=0; i<n;i++){
        if(i+1<n){
          avrg[i] = (arr[i]+ arr[i+1])/2;
        }
    }

       for(int i=0; i<x;i++){
        printf(" %d",avrg[i]);
    }
}
    
    

    


