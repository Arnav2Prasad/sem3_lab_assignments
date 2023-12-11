#include <stdio.h>

int main(){
        int arr[]={0,0,0,0};
        char ch[100];
	printf("Enter string : ");
        fgets(ch,100,stdin);
        for (int i=0;i<sizeof(ch);i++){
                if (ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
                        arr[0]++;
                }
                else if(ch[i]>='A' && ch[i]<='z'){
                        arr[1]++;
                }
                else if(ch[i]>='0' && ch[i]<='9'){
                        arr[2]++;
                }
                else if((int)ch[i]==32){
                        arr[3]++;
                }
        }
        printf("The number of the vowels in the string(entered) is : %d\n",arr[0]);
        printf("The number of the consonants in the string(entered) is : %d\n",arr[1]);
        printf("The number of the digits in the string(entered) is : %d\n",arr[2]);
        printf("The number of the blank spaces in the string(entered) is : %d\n",arr[3]);
        return 0;
}
