#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

//strstr (to be extra)


int main(){
  //strcpy
  printf("\nSTRCPY  ---------------------------\n\n");
  char cp1[5] = "hello", *cp2 = "Hi, how are you?";
  printf("strcpy(\"hello\", \"Hi, how are you?\") : %s\n", strcpy(cp1, cp2));
  printf("         mystrcpy                   : %s\n", mystrcpy(cp1, cp2));

  printf("\n");
  
  char cp3[5] = "hello", *cp4 = "hi";
  printf("strcpy(\"hello\", \"hi\")               : %s\n", strcpy(cp3, cp4));
  printf("         mystrcpy                   : %s\n", mystrcpy(cp3, cp4));
  
  //strlen
  printf("\nSTRLEN  ---------------------------\n\n");
  
  //strcmp
  printf("\nSTRNCMP ---------------------------\n\n");
  char *s1 = "abc", *s2 = "def";
  printf("strncmp(abc, def, 3)    : %d\n", strncmp(s1, s2, 3));
  printf("           mystrncmp    : %d\n", mystrncmp(s1, s2, 3));

  printf("\n");
  
  printf("strncmp(def, abc, 3)    : %d\n", strncmp(s2, s1, 3));
  printf("           mystrncmp    : %d\n", mystrncmp(s2, s1, 3));

  printf("\n");
  
  char *s3 = "abcdef";
  printf("strncmp(abc, abcdef, 3) : %d\n", strncmp(s1, s3, 3));
  printf("           mystrncmp    : %d\n", mystrncmp(s1, s3, 3));

  printf("\n");
  
  printf("strncmp(abc, abcdef, 7) : %d\n", strncmp(s1, s3, 7));
  printf("           mystrncmp    : %d\n", mystrncmp(s1, s3, 7));

  //strchr
  printf("\nSTRCHR  ---------------------------\n\n");
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
