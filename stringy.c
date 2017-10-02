#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcpy

//strlen

//strncmp
int mystrncmp(char *s1, char *s2, int n){
  int l1 = strlen(s1), l2 = strlen(s2);
  int i = 0, count = n;
  int c1, c2;
  while(count){
    if(l1 > n - count){
      c1 = s1[n - count];
    }
    if(l2 > n - count){
      c2 = s2[n - count];
    }
    if(c1 != c2){
      break;
    }
    count--;
  }
  return c1 - c2;
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

//strstr (to be extra)


int main(){
  //strcpy
  printf("\nSTRCPY  ---------------------------\n");
  //strlen
  //strcmp
  printf("\nSTRNCMP ---------------------------\n");
  char *s1 = "abc", *s2 = "def";
  printf("strncmp(abc, def, 3)    --> %d\n", strncmp(s1, s2, 3));
  printf("           mystrncmp    --> %d\n", mystrncmp(s1, s2, 3));

  printf("strncmp(def, abc, 3)    --> %d\n", strncmp(s2, s1, 3));
  printf("           mystrncmp    --> %d\n", mystrncmp(s2, s1, 3));

  char *s3 = "abcdef";
  printf("strncmp(abc, abcdef, 3) --> %d\n", strncmp(s1, s3, 3));
  printf("           mystrncmp    --> %d\n", mystrncmp(s1, s3, 3));

  printf("strncmp(abc, abcdef, 7) --> %d\n", strncmp(s1, s3, 7));
  printf("           mystrncmp    --> %d\n", mystrncmp(s1, s3, 7));

  printf("strncmp(abc, abc, 4)    --> %d\n", strncmp(s1, s1, 4));
  printf("           mystrncmp    --> %d\n", mystrncmp(s1, s1, 4));
  
  //strchr
  printf("\nSTRCHR  ---------------------------\n");
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

  //strcat

  return 0;
}
