#include <stdio.h>
void sort(char s[]) {
    int i, j;
    char temp;
    for(i=0; s[i]!='\0'; i++) {
    for(j=i+1; s[j]!='\0'; j++) {
    if(s[i] > s[j]) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    }
    }
    }
}
int main() {
    char str1[100], str2[100];
    int i;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    sort(str1);
    sort(str2);
    for(i=0; str1[i]!='\0' && str2[i]!='\0'; i++) {
    if(str1[i] != str2[i]) {
    printf("Not Anagrams\n");
    return 0;
    }
    }
    if(str1[i] == str2[i]) 
    printf("Anagrams\n");
    else
    printf("Not Anagrams\n");
    return 0;
}