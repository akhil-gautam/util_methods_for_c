#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>        

char * to_snake_case(char *);
int capitals(char *, int);

int main(){
  char input_string[] = "MasterAkhilGautam";
  printf("%s\t", to_snake_case(input_string));
  printf("\n");
}

char * to_snake_case(char *str){
  int string_length = strlen(str);
  int caps = capitals(str, string_length);

  char *ptr = (char *)malloc((caps + string_length) * sizeof(char));
  for(int i = 0; i < string_length; i++){
    if(isupper(str[i])){
      if(i > 0)
        *ptr++ = '_';
      *ptr = tolower(str[i]);
    } else {
      *ptr = str[i];
    }
    ptr++;
  }
  return ptr - caps - string_length;
}

int capitals(char *str, int len){
  int count = 0;
  for(int i = 1; i < len; i++){
    if (isupper(str[i]))
      count++;
  }
  return count;
}
