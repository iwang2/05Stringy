#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcpy

//strlen

//strcmp

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

//strstr (to be extra)


int main(){
  char* str1 = "The quick brown fox jumps over the lazy dog.";
  char test = 'x';
  printf("str1 is: %s\n",str1);
  printf("The test character is: %c\n",test);
  printf("Str1 and test run through my strchr: %s\n",mystrchr(str1,test));
  printf("Str1 and test run through normal strchr: %s\n",strchr(str1,test));
  test = '!';
  printf("The test character is now: %c\n",test);
  printf("Str1 and test run through my strchr: %s\n",mystrchr(str1,test));
  printf("Str1 and test run through normal strchr: %s\n",strchr(str1,test));
    

  return 0;
}
