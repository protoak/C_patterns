#include<stdio.h>
#include<string.h>
int n,i,j,k,l;

int pattern1(int n){
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      printf("%d",j);
    }
    printf("\n");
  }
}
int pattern2(int n){
  for(i=n;i>=1;i--){
    for(j=1;j<=i;j++){
      printf("%d",j);
    }
    printf("\n");
  }
}
int pattern3(int n){
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      if(i==n||j==1||i==j)
      printf("%d ",j);
      else
      printf("  ");
    }
    printf("\n");
  }
}
int pattern4(int n){
  int a;
  for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
      printf("  ");
    }
    for(k=i;k<=(i*2)-1;k++){
      printf("%d ",k);
      a = k-1;
    }
    for(l=i;l<=(i*2)-2;l++){
      printf("%d ",a--);
    }
    printf("\n");
    }
 }

int pattern5(int n){
  for(i=1;i<=n;i++){
    for(j=i;j<=n-1;j++){
      printf(" ");
    }
    for(k=1;k<=i;k++){
      if(i==n||k==1||k==i)
        printf("%d ",k);
      else
        printf("  ");
    }
    printf("\n");
  }
}

int pattern6(int n){
  for(i=1;i<=n;i++){
    for(j=i;j<=n;j++){
      if(i==1||j==i||j==n)
        printf("%d ",j);
      else
        printf("  ");
    }
    printf("\n");
  }
}

int pattern7(int n){
  char S[100] = "123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  n=9;
  int N = strlen(S);
//  1-H=>16  H-X=>16   X-n=>16
//  2-g=>14 
//  3-F=>12 
  int gap =(2*n)-2; //16
  for(i=0;i<n;i++){
    int nxt_gap =gap-(2*i);
    for(j=i;j<N;j=j+gap){
      printf("%c",S[j]);   
      if(nxt_gap>0 && nxt_gap<gap && (nxt_gap+j)<N){
        for(k=0;k<(gap-n-i);k++)
          printf(" ");
        printf("%c",S[j+nxt_gap]);
      for(k=0;k<i-1;k++)
        printf(" ");
      }
      else{
        for(k=0;k<(gap-n);k++)
          printf(" ");
      }
    }
    printf("\n");
  }  
}

int pattern8(int n){
  char S[100] = "AttentionReaders!Don'tStopLearning!HappyLearning!";
  int N = strlen(S);
//  A-S=>22  S-n=>22
//  t-t=>20 
//  t-'=>18 
  int gap =(2*n)-2; //16
  for(i=0;i<n;i++){
    int nxt_gap =gap-(2*i);
    for(j=i;j<N;j=j+gap){
      printf("%c",S[j]);   
      if(nxt_gap>0 && nxt_gap<gap && (nxt_gap+j)<N){
        for(k=0;k<(gap-n-i);k++)
          printf(" ");
        printf("%c",S[j+nxt_gap]);
      for(k=0;k<i-1;k++)
        printf(" ");
      }
      else{
        for(k=0;k<(gap-n);k++)
          printf(" ");
      }
    }
    printf("\n");
  }  
}

int pattern9(int n){
  for(i=n;i>=1;i--){
    for(j=1;j<=(i*2);j++){
      printf("*");
    }
    printf("\n");
    for(k=n;k>=i;k--){
      printf("*\n");
    }
  }
}
pattern10(int n){  //n=5
      for (i=1;i<n;i++){
        printf("_ _ ");
        for(j=1;j<=n-i;j++){
            printf("X ");
        }
        printf("\n");
        printf("_ ");
        for(j=1;j<=n-i;j++){
            printf("X ");
        }
        printf("\n");
        for(k=1;k<=i;k++){
            printf("X\n");
        } 
    }
}
int pattern11(int n){
//   i=1 => 2
//     2 => 4
//     3 => 8
//     4 => 16
  for(i=1;i<=n;i++){
    for(k=1;k<=i;k++){
      printf("X\n");
    }
    for(j=1;j<=i;j++){
      printf("_");
    }
    for(j=1;j<=1<<i;j++){
      printf("X");
    }
    printf("\n");
  }
}
int pattern12(int n){
  for(i=1;i<=n;i++){
    for(j=1;j<=(i*3);j++){
      printf("* ");
    }
    printf("\n");
    if(i!=n){
      for(k=1;k<=i*3;k++){
        printf("*\n");
    }
    }
  }
}
int pattern13(int n){    //mock pattern
  for (i=1;i<=3;i++){
    for(j=1;j<=6*i;j++){
      printf("*");
      if(j%(i*3)==0)
        printf("\n");
    }
    if(i!=3){
      for(k=1;k<=i;k++)
        printf("*\n");  
    }
   }
}

int pattern14(int n){
  int m= n*2-1;
  for(i=1;i<=m;i++){
    for(j=1;j<=m;j++){
      if(i==j||j==m-i+1)
      printf("X");
      else
      printf(" ");
    }
    printf("\n");
  }
}
int pattern15(int n){
  int m= n*2;
  for(i=1;i<=m;i++){
    for(j=1;j<=m;j++){
      if(i==j||j==m-i+1)
      printf("X");
      else
      printf(" ");
    }
    printf("\n");
  }
}
 int pattern16(int n){
  for(i=n;i>=1;i--){
    for(j=1;j<=i*2;j++){
      printf("* ");
    }
    printf("\n");
    for(k=n;k>=i;k--){
      printf("*\n");
    }
  }
 }
//   i= 1  X   1 2 4 6 8 10
 int pattern17(int n){          
  for(i=0;i<n;i++){
    for(k=1;k<=i;k++){
      printf("_ ");
    }
    printf("X ");
    printf("\n");
    if(i!=n-1){
     for(j=1;j<=k*2;j++){
      printf("X ");
     }
    }
    printf("\n");
    }
  }

int pattern18(int n){
  for(i=3;i<=n;i++){
    for(j=3;j<=i;j++){
      printf("%d",i);
    }
    printf("\n");
  }
  for(i=n-1;i>=3;i--){
    for(j=1;j<=i-2;j++){
      printf("%d",i);
    }
    printf("\n");
  }
}
 
int pattern19(int n){
  for(i=1;i<=n;i++){     //n=7
    for(j=1;j<=n;j++){
      if(i==1||i==n||j==1||j==n||i==j||i+j==n+1)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}

//1
//2*2
//3*3*3
//4*4*4*4

int pattern20(int n){ 
  k=0;
  for(i=1;i<=n;i++){
    k++;
    printf("%d", k);
    for(j=1;j<=i-1;j++){
      k++;
      printf("*%d",k);
      }
      printf("\n");
  }
  for(i=n;i>=1;i--){
    k=k-i+1;
    printf("%d",k);
    for(j=1;j<=i-1;j++){
      k++;
      printf("*%d",k);
      }
      printf("\n");
      k=k-i;
  }
}

int pattern21(int n){
  printf("*\n");
  for (i=1;i<=n;i++) {
    printf("*");
    for (j=1;j<=i;j++) {
      printf("%d", j);
    }
    for (j=i-1;j>=1;j--) {
      printf("%d", j);
    }
    printf("*");
    printf("\n");
    }
    for(i=n-1;i>=1;i--) {
      printf("*");
      for(j=1;j<=i;j++) {
        printf("%d", j);
      }
      for (j=i-1;j>=1;j--) {
        printf("%d", j);
      }
      printf("*");
      printf("\n");
    }
  printf("*\n");
}

int pattern22(int n){
  for(i=1;i<=n;i++){
    for(j=0;j<i;j++){
      printf("* ");
    }
    k=2*(n-i);
    for(j=0;j<k;j++){
      printf("  ");
    }
    for(j=0;j<i;j++){
      printf("* ");
    }
    printf("\n");
   }
  for(i=n;i>=1;i--){
    for(j=0;j<i;j++){
      printf("* ");
    }
    k=2*(n-i);
    for(j=0;j<k;j++){
      printf("  ");
    }
    for(j=0;j<i;j++){
      printf("* ");
    }
    printf("\n");
  }
}
 //n=5
int pattern23(int n){
   for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
      printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
      printf("*");
    }
    printf("\n");
  }
  for(i=n-1;i>=1;i--){
    for(j=1;j<=n-i;j++){
      printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
      printf("*");
    }
    printf("\n");
  }
}


int pattern24(int n){
  for(i=1;i<=n;i++){
    for(j=i;j<n;j++){
      printf(" ");
    }
    for(k=1;k<=n;k++){
      printf("*");
    }
    printf("\n");
  }
}

int pattern25(int n){
  for(i=1;i<=n;i++){
    for(j=i;j<n;j++){
      printf(" ");
    }
    for(k=1;k<=n;k++){
      if(i==1||i==n||k==1||k==n)
        printf("*");
      else
        printf(" ");
     }
    printf("\n");
  }
}

int pattern26(int n){
  for(i=1;i<=n-1;i++){
    for(j=1;j<i+1;j++){
      printf(" ");
    }
    printf("   *");
    printf("\n");
  }
  for(i=1;i<=n*2-1;i++){
    printf("*");
  }
  printf("\n");
  for(i=n-1;i>=1;i--){
    for(j=1;j<i+1;j++){
      printf(" ");
    }
    printf("   *");
    printf("\n");
  }
}

int pattern27(int n){
  for(i=1;i<=n-1;i++){
    for(j=n;j>i;j--){
      printf(" ");
    }
    printf("*");
    printf("\n");
  }
  for(i=1;i<=n*2-1;i++){
    printf("*");
  }
  printf("\n");
  for(i=1;i<=n-1;i++){
    for(j=1;j<i+1;j++){
      printf(" ");
    }
    printf("*");
    printf("\n");
  }
}

int pattern28(int n){
  for(i=1;i<=n*2-1;i++){
    for(j=1;j<=n*2-1;j++){ 
      if(i==n||j==n)
       printf("*");
      else 
        printf(" ");
    }
    printf("\n");
  }
}

//n=5
int pattern29(int n){
  l=n
  for(i=1;i<=n-1;i++){
    for(j=n-1;j>=i;j--){
      printf(" ");
    }
    for(j=1;j)
    printf("\n");
  }
}

int main(){
  printf("enter no of rows: ");
  scanf("%d",&n);
  pattern29(n);
}