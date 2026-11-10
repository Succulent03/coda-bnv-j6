#include <stdlib.h>
#include <stdio.h>

int str_len(char *str){
    int i = 0;
    while (str[i] != '\0'){
        i = i + 1;
    }
    return i;
}
int main(){
    char * ma_chaine = "Bonjour !";
    int longueur = str_len(ma_chaine);
    printf("La chaine %s contient %d caracteres.\n", ma_chaine, longueur);
    return 0;
}
