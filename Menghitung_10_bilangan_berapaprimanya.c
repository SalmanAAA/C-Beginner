#include <stdio.h>

int apakah_prima(int n){ /*modular untuk apakah prima return 1 jika iya artinya count akan next step dari 0+1*/
    if(n<=1){
        return 0;
    }
    for(int i = 2; i*i <= n;i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int bilangan[10];
    /*bagian ini adalah bagian menggunakan input sampai 10x*/
    for(int i = 0; i < 10; i++){
        scanf("%d",&bilangan[i]);
    }
    int count = 0;
    for(int i = 0; i <= bilangan[i];i++){
        if (apakah_prima(bilangan[i])){ /*menggunakan modular untuk menghitung sebuah apakah bilangan prima jika return 1 dihitung count*/
            count++;
        }
    }
    printf("%d",count);
    return 0;
}