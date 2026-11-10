#include <stdlib.h>
#include <stdio.h>

int str_len(char *str){
    int i = 0;
    while (str[i] != '\0'){
        i = i + 1;
    }
    return i;
}
void str_rev(char *str){
    int i = str_len(str)-1;
    while(i >= 0){
        printf("%c", str[i]);
        i = i - 1;
    }
}
int main(){
    char ma_chaine[] = "Hello World !";
    str_rev(ma_chaine);
    printf("\n");
    return(0);
}
