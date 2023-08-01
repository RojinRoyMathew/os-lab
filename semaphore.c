#include<stdio.h>
#include <stdlib.h>
void consumer();
void producer();
int mutex=1,full=0,empty=5,x=0,c,i;
void producer(){
mutex--;
empty--;
full++;
x++;
printf("producer produce item-%d\n",x);
mutex++;
}
void consumer(){
mutex--;
empty++;
full--;
printf("consumer consume item-%d\n",x);
x--;
mutex++;
}
void main(){
puts("1-Enter the producer to produce item\n1-Enter the consumer to consume item\nExit\n");
for(i=1;i>0;i++){
puts("Enter the choice");
scanf("%d",&c);
switch(c){
case 1:
if(mutex=1 && empty!=0){
producer();
}else{
puts("Buffer is full");
}
break;
case 2:
if(mutex=1 && full!=0){
consumer();
}else{
puts("Buffer is empty");
}
break;
case 3:exit(0);
}
}
}
