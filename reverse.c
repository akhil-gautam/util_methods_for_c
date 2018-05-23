#include<stdio.h>
#include<string.h>

void reverse(char *);
void swap(char *, char *);

void main(){
    char str[] = "akhil_gautam";
    reverse(str);
    printf("%s\n", str);
}

void reverse(char *str){
    int length = strlen(str);
    char *epos = &str[length-1];

    for(int i = 0; i < length/2; i++){
        swap(str, epos);
        str++;
        epos--;
    }
}
void swap(char *first, char *second){
    char temp = *second;
    *second = *first;
    *first = temp;
}