#include <stdio.h>
int main(){
    int num, i;
    scanf("%d",&num);
    for(i=1,i<num,i++){
        if(num%i == 0 && i != 1){
            printf("Not Prime");
            break
        }else{
            printf("Prime");
        }
    }
    return 0;
}