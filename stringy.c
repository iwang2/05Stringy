#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringy.h"

//strcpy
char *mystrcpy(char *dest, char *src){
  int i = 0;
  while(src[i]){
    dest[i] = src[i];
    i++;
  }
  return dest;
}

//strlen
int mystrlen(char *s){
  int i = 0;
  for(i;s[i];i++){
  }
  return i;
  
}

//strncmp
int mystrncmp(char *s1, char *s2, int n){
  int count = 0;
  while(n){
    if(s1[count] != s2[count]){
      return s1[count] - s2[count];
    }
    n--;
    count++;
  }
  return 0;
}
      

//strchr
char *mystrchr(char *s, char c){
  char *ret = 0;
  int i = 0;
  
  while(s[i]){
    if(s[i] == c){
      ret = s + i;
      break;
    }
    i++;
  }
  
  return ret;
}
//strcat
char *mystrcat(char *s1, char *s2){
  char *c = s1;
  //Gets pointer to the end of first string, right where the null is.
  for(c;*c;c++){
  }

  //Copies char by char until the end of the source is reached
  int i = 0;
  for(i;s2[i];i++){
    *c = s2[i];
    c++;
  }

  //Returns the new concattenated destination string.
  return s1;
}

//strstr (to be extra)


