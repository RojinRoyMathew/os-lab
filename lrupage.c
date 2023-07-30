#include <stdio.h>

int main() {
    int i,j,m[25],r[25],n,f,min,count[25],next=0,pf=0,flag[25];
    printf("Enter the size string");
    scanf("%d",&n);
    puts("Enter the sting");
    for(i=0;i<n;i++){
    scanf("%d",&r[i]);
    flag[i]=0;
    }
    puts("Enter the size of frame");
    scanf("%d",&f);
    for(i=0;i<f;i++){
        count[i]=0;
        m[i]=-1;
    }
   puts("page replacement");
   for(i=0;i<n;i++){
       for(j=0;j<f;j++){
           if(m[j]==r[i]){
               flag[i]=1;
               count[j]=next;
               next++;
           }
       }
       if(flag[i]==0){
           if(i<f){
               m[i]=r[i];
               count[i]=next;
               next++;
           }else{
      min=0;
      for(j=1;j<f;j++){
          if(count[min]>count[j]){
              min=j;
         } }
          m[min]=r[i];
           count[min]=next;
               next++;
           }
       pf++;
       }
       for(j=0;j<f;j++){
       printf("%d\t",m[j]);
     
       }if(flag[i]==0){
           puts("M");
       } else{
           puts("H");
       }
       puts("\n");
       }
     printf("TOTAL NO OF PAGE FAULT %d\n",pf);
   }
