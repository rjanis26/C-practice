/* #include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{   

    int n; scanf("%d", &n);
    char str[10], str2[10];

    scanf("%s %s", &str, &str2);

    for(int i=0; i<strlen(str); i++) {
        for(int j=i+1; j<strlen(str2); j++) {
            if(str[i] == str2[j]) {
            printf("No\n");
            return 0;
        }
        }
         
    }

    printf("Yes\n");

 
    return 0;
}

   */


  
 /* 
 #include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Member {
  char name[50];
  char name2[50];
};


int main() {
    int n;
    scanf("%d", &n);
    struct Member person[n];
    char a[50];

    
    for (int i = 0; i < n; i++) {
        scanf("%s %s", person[i].name, person[i].name2);
        for (int j = 0; j < i; j++) {
            if (strcmp(person[i].name, person[j].name) ==0 && strcmp(person[i].name2, person[j].name2)==0){
                printf("Yes");
                return 0;
            } else {
                strcpy(a, "No");
            }
        }
    }
    printf("%s", a);
    
    return 0;
}   
  */
 

#include <stdio.h>
#include <string.h>

// create struct with person1 variable 

struct Member {
  char name[50];
  char name2[50];
};
 

int main() {
    int n;
    scanf("%d", &n);
    struct Member person[n];
    char a[50];


    for (int i = 0; i < n; i++) {
        scanf("%s %s", person[i].name, person[i].name2);
        for (int j = 0; j < i; j++) {
            if (strcmp(person[i].name, person[j].name) ==0 && strcmp(person[i].name2, person[j].name2)==0){
                printf("Yes");
                return 0;
            } else {
                strcpy(a, "No");
                 
            }
        }
    }
    printf("%s", a);
    
    return 0;
}  




