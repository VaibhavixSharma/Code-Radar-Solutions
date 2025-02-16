#include <stdio.h>
int main(){
    int num,i = 0,sum = 0;
    scanf("%d",&num);
    while(i <= num){
        sum = sum + i;
        i++;
    }
    printf("%d",sum);
    return 0;
}