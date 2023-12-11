#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int freq[256]={0}; 

    int i=0;
    int c1=0;
    printf("Enter string: ");
    while ((c1=getchar())!='\n'){
            s[i++]=c1;
    }
    s[i]='\0';

    for (int i=0;i<strlen(s);i++) {
        freq[s[i]-'0']++;
    }

    printf("Character Frequency Array:\n");

    for (int i=0;i<256;i++) {
        if (freq[i]!=0) {
            printf("%c: %d\n",i+'0',freq[i]);
        }
    }

    return 0;
}
