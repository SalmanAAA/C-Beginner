#include <stdio.h>

int main (){
    int bilangan;
    
    scanf("%d", &bilangan);
    if(bilangan <= 1){
        printf("prima");
        return 0;
    }
    if(bilangan == 2){
        printf("prima");
        return 0;
    }
    for (int i = 2;i <= bilangan;i++){
        if (bilangan % i == 0){
            printf("bukan prima");
            return 0;
        }else{
            printf("prima");
            return 0;
        }
    }
    printf("prima");
    return 0;
}