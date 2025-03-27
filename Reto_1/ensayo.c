#include <stdio.h>

int main(){
    int i = 0;
    for (i = 0; i <= 100000; i++){
        printf("\rcargando %d %c", i/1000, 37);
    }
    printf("\n");
}