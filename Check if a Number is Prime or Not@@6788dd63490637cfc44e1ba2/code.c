#include <stdio.h>
int main(){
    int num, i, div = 0;
    scanf("%d",&num);
    for(i=1;i<num;i++){
        if(num%i == 0 && i != 1){
            div ++;
            break;
        }else{
            continue
        }
    }
    if(div == 0){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}