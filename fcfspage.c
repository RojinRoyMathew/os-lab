#include <stdio.h>

int main()
{ 
    int n,i,j,pf=0,k,count=0,f,m[50],r[50];
    printf("Enter the total no string");
scanf("%d",&n);
printf("Enter the string");
for(i=0;i<n;i++){
    scanf("%d",&r[i]);
}
puts("Enter the no of frame");
scanf("%d",&f);
for(i=0;i<n;i++){
    m[i]=-1;
}
puts("page replacement");
for(i=0;i<n;i++){
    for(j=0;j<f;j++){
        if(m[j]==r[i]){
        break;
        }}
        if(j==f){
        m[count++]=r[i];
        pf++;
        }
    for(k=0;k<f;k++){
        printf("%d\t",m[k]);
    }
    if(j==f){
    puts("\tM");
    puts("\n");
    }else{
        puts("\tH");
        puts("\n");
    }
    if(count==f){
        count=0;
    }
    
}
printf("TOTAL NO OF PAGE FAULT %d\n",pf);
}
