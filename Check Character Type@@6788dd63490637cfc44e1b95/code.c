// Your code here...
#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>='0' && a<='9'){
        printf("Digit\n");
    }
    else if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'  ){
        printf("Vowel\n");
    }
    else if(a>='A' && a<='Z' || a>='a' && a<='z'){
        printf("Consonant\n");
    }
    else{
        printf("Special Character");
    }
}