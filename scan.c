#include<stdio.h>
#include<stdlib.h>
int i,j,n,temp,rq[100],size,totalhead=0,move,intial;
void input();
void main(){
int index;
input();
puts("Enter the number of request");
scanf("%d",&n);
puts("Enter the request");
for(i=0;i<n;i++){
scanf("%d",&rq[i]);
}
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(rq[i]>rq[j]){
temp=rq[j];
rq[j]=rq[i];
rq[i]=temp;
}
}
}

for(i=0;i<n;i++){
if(intial<rq[i]){
index=i;
break;
}
}
if(move==1){
for(i=index;i<n;i++){
totalhead=totalhead+abs(rq[i]-intial);
intial=rq[i];
}
totalhead=totalhead+abs(size-intial);
intial=size;
for(i=index-1;i>=0;i--){
totalhead=totalhead+abs(rq[i]-intial);
intial=rq[i];
}
}else{
for(i=index-1;i>=0;i--){
totalhead=totalhead+abs(rq[i]-intial);
intial=rq[i];
}
totalhead=totalhead+abs(rq[i+1]-0);
intial=0;
for(i=0;i<n;i++){
totalhead=totalhead+abs(rq[i]-intial);
intial=rq[i];
}
}
printf("TOTAL HEAD MOVEMENT %d",totalhead);
}
void input(){
puts("Enter the disk size");
scanf("%d",&size);
puts("Enter the inital head");
scanf("%d",&intial);
puts("choose to move left is 0 |right is 1 ");
scanf("%d",&move);
}
