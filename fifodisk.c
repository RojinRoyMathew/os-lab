#include <stdio.h>
#include <stdlib.h>
int main() {
    int r,rq[20],i;
      int inital,totalhead=0;
     puts("Enter the inital head");
    scanf("%d",&inital);
    printf("Enter the number of disk request");
    scanf("%d",&r);
    puts("Enter the disk request");
    for(i=0;i<r;i++){
        scanf("%d",&rq[i]);
    }
    for(i=0;i<r;i++){
        totalhead=totalhead+abs(rq[i]-inital);
        inital=rq[i];
    }
    printf("TOTAL HEAD MOVEMENT %d\n",totalhead);
}
