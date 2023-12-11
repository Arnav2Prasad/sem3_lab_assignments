#include <stdio.h>

int main(){
        char ch[100];
        printf("Input a string : ");
        fgets(ch,sizeof(ch),stdin);
        for (int i=0;i<sizeof(ch);i++){
                if (ch[i]>='a' && ch[i]<='z'){
                        ch[i]-=32;
                }
        }
        printf("The Upper case of string(entered) is : %s",ch);
        for (int i=0;i<sizeof(ch);i++){
                if (ch[i]>='A' && ch[i]<='Z'){
                        ch[i]+=32;
                }
        }
        printf("The Lower case of string(entered) is : %s",ch);
        return 0;
}

