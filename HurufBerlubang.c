#include<stdio.h>
#include<string.h>

int main (){
    char teks[50];
    int hitung = 0;
    
    fgets(teks,sizeof(teks),stdin);
    
    for (int i = 0; teks[i] ;i++){
        if (teks [i] == 'B'){
            hitung += 2;
        }else if(teks [i]== 'A' || teks [i]== 'P' || teks [i]== 'D' || teks [i]== 'O' || teks [i]== 'Q' || teks [i]== 'R'){
            hitung += 1;

        }
    }
    printf("%d\n",hitung);
    return 0;
}
