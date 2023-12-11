#include <stdio.h>
//withoult using standard library functions

int Strlen(char s1[]) {
    int count=0;
    for (int i=0;s1[i]!='\0';i++){
            count++;
    }
    return count;
}



void Strcpy(char s1[],char s2[]) {
    int i;
    for (i=0;s1[i]!='\0';i++){
            s2[i]=s1[i];
    }
    s2[i]='\0';

}


int Strcmp(char s1[],char s2[]) {
    int i = 0;
    while (s1[i]==s2[i]) {
        if (s1[i]=='\0') {
            return 0;
        }
        i++;
    }
    return s1[i]-s2[i];
}

void Strcat(char s2[],char s1[]) {
    int len=Strlen(s2);
    int i=0;
    while (s1[i]!='\0') {
        s2[len+i]=s1[i];
        i++;
    }
    s2[len+i]='\0';
}

void Strrev(char s1[]) {
    int length=Strlen(s1);
    int start=0;
    int end=length-1;
    char temp;
    while (start<end) {
        temp=s1[start];
        s1[start]=s1[end];
        s1[end]=temp;
        start++;
        end--;
    }
}
void Substring(char s1[], int start, int length, char s2[]) {
    int i;
    for (i=0;i<length && s1[start + i]!='\n';i++) {
        s2[i]=s1[start + i];
    }
    s2[i]='\n';
}

int main() {
  
    char s1[100], s2[100];
  char ans[100];
    int choice;


  int start;
  int length;


        int i=0;
    int j=0;
    int c1=0,c2=0;
    printf("Enter string-1: ");
    while ((c1=getchar())!='\n'){
            s1[i++]=c1;
    }
    s1[i]='\0';
    printf("Enter string-2: ");
    while ((c2=getchar())!='\n'){
            s2[j++]=c2;
    }
    s2[j]='\0';

  printf("Menu:\n1. Length\n2. Copy\n3. Compare\n4. Concate\n5. Reverse\n6. Substring\n: \n");

  
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of %s is %d\n",s1,Strlen(s1));
              printf("Length of %s is %d\n",s2,Strlen(s2));
                break;
            case 2:
                
                Strcpy(s2,ans);
                printf("Copied string-2 : %s\n",ans);
                break;
            case 3:
                printf("The result is negative if string-2 is greater than string-1\nAnd positive if string-1 is greater.\nIts zero if both the strings are equal\n");
                
                printf("Comparison result: %d\n",Strcmp(s1, s2));
                break;
          case 4:
                
                Strcat(s1,s2);
                printf("Concatenated string: %s\n",s1);
                break;
            case 5:
                Strrev(s1);
                printf("Reversed string-1: %s\n",s1);
                break;
            case 6:
                
                printf("Enter the starting index for substring: ");
                scanf("%d",&start);
                printf("Enter the length of substring: ");
                scanf("%d",&length);
                char substring[100];
                Substring(s1,start,length,substring);
                printf("Substring: %s\n",substring);
                break;
            default:
                printf("Enter another choice\n");
                break;
        }
  
        return 0;
}


/*
#include <stdio.h>
#include <string.h>

//using built-in functions
int main() {
  printf("The menu loop will run 7 times, so that you can go through all cases individually and at one run instant\n");
    char s1[100];
    char  s2[100];
    int no;
    char ans[100];
  int a=0;
  int len=0;

    int i=0;
    int j=0;
    int c1=0,c2=0;
    printf("Enter string-1: ");
    while ((c1=getchar())!='\n'){
            s1[i++]=c1;
    }
    s1[i]='\0';
    printf("Enter string-2: ");
    while ((c2=getchar())!='\n'){
            s2[j++]=c2;
    }
    s2[j]='\0';

    printf("Menu:\n1. Length\n2. Copy\n3. Compare\n4. Concate\n5. Reverse\n6. Substring\n: \n");

  for (int z=0;z<7;z++){
    printf("Choice(between 1 and 6) : ");
    scanf("%d",&no);

    switch(no){
            case 1:
                printf("Length of string %s : %lu\n",s1,strlen(s1));
                printf("Length of string %s : %lu\n",s2,strlen(s2));
                break;
            case 2:

                strcpy(ans,s2);
                printf("Copy of string-2 : %s\n",s1);
                break;
            case 3:
                if (strcmp(s1,s2)!=0) {
                    printf("Strings %s and %s are not equal.\n",s1,s2);
                }
                else {
                    printf("Strings %s and %s are equal.\n",s1,s2);
                }
                break;
            case 4:
                strcat(s1,s2);
                printf("Concatenation of strings are is : %s\n",s1);
                break;
            case 5:
        
                printf("There is no reverse function in standard library of C, so cant use it\n");
                break;
            case 6:
                printf("Enter index from where you want to start(zero indexing): ");
                scanf("%d",&a);
                printf("Enter length of substring you want: ");
                scanf("%d",&len);
                strncpy(ans,ans+a,len);
                ans[len]='\0';
                printf("Substring of string-2: %s\n",ans);
                break;
            default:
                printf("Invalid choice,Input choice again..!\n");
                break;

    }
  }
    return 0;
}
*/



