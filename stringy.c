#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcpy

//strlen

//strncmp
int mycmpn(char *s1, char *s2, int n){
  int length = strlen(s1);
  int i = length;
  if(strlen(s2) < length){
    length = strlen(s2);
  }
  if(length > n){
    length = n;
  }
  while(s1[length - i] == s2[length - i]){
    i++;
  }
  return s1[length - i] - s1[length - i];
}

//strchr

//strcat

//strstr (to be extra)
