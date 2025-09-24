#include <stdio.h>
int main()
{
    char str[200], longest[50], word[50];
    int i=0, j=0, max=0, len=0, k;
    printf("Enter a sentence:\n");
    gets(str);
    while(str[i] != '\0')
    {
    if(str[i] != ' ' && str[i] != '\n')
    {
    word[j] = str[i];
    j++;
    }
    else
    {
    word[j] = '\0';
    len = 0;
    while(word[len] != '\0')
    {
    len++;
    }
    if(len > max)
    {
    max = len;
    for(k=0; k<=len; k++)
    {
    longest[k] = word[k];
    }
    }
    j = 0;
    }
    i++;
    }
    word[j] = '\0';
    len = 0;
    while(word[len] != '\0')
    {
    len++;
    }
    if(len > max)
    {
    max = len;
    for(k=0; k<=len; k++)
    {
    longest[k] = word[k];
    }
    }
    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", max);
    return 0;
}
