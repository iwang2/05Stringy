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
  char *greeting = "Greetings!";
  printf("String greeting is: %s\n",greeting);
  printf("Expected length: 10\n");
  printf("Length as given by normal strlen: %d\n", strlen(greeting));
  printf("Length as given by my strlen: %d\n\n", mystrlen(greeting));
  
  
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
  printf("str1 and test run through my strchr: %s\n",mystrchr(str1,test));
  printf("str1 and test run through normal strchr: %s\n\n",strchr(str1,test));
  test = '!';
  printf("The test character is now: %c\n",test);
  printf("str1 and test run through my strchr: %s\n",mystrchr(str1,test));
  printf("str1 and test run through normal strchr: %s\n\n",strchr(str1,test));
  printf("Same behavior achieved!\n");

  //strcat
  printf("\nSTRCAT  ---------------------------\n\n");
  char str2[200] = "I'm here to kick butt and drink milk...";
  char str3[200] = "and I just finished my milk.";
  printf("str2 is: %s\n",str2);
  printf("str3 is: %s\n",str3);
  printf("Concattenated with normal strcat: %s\n\n",strcat(str2,str3));
  printf("str2 is: %s\n\n\n",str2);

  char str4[200] = "I'm here to kick butt and drink milk...";
  char str5[200] = "and I just finished my milk.";
  printf("NEW str4 is: %s\n",str4);
  printf("NEW str5 is: %s\n",str5);
  printf("Concattenated with my strcat: %s\n\n",mystrcat(str4,str5));
  printf("str4 is: %s\n\n\n",str4);

  printf("Same behavior achieved!\n");


  

  return 0;
}
