#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcpy

//strlen

//strcmp

//strchr
char *mystrchr(char *s, char *c){
  char *ret;
  int i = 0;
  while(s[i]){
    if(s[1] == *c){
      *ret = s + i;
    }
  }
  return ret;
}
//strcat

//strstr (to be extra)


int main(){


  return 0;
}
