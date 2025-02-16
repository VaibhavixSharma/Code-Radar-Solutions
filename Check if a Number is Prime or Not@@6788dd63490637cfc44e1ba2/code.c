#include <stdio.h>
int main(){
    int num, i = 1;
    scanf("%d",&num);
    for(i,i<num,i++){
        if(num%i == 0 && i != 1){
            print("Not Prime");
            break
        }else{
            printf("Prime");
        }
    }
    return 0;
}