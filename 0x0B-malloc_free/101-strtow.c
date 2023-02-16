#include <stdio.h>
#include <stdlib.h>

int count_words(char *str){
    int a, count;
    count = 0;

    for(a = 0; str[a] != '\0'; a++){
        if(str[a] == ' ' && (str[a +1] != ' ' && str[a + 1] != '\0')){
             count++;
        }  
    }
    return count;
}


int main(void)
{
char *words, *tab;
int i;
words = ("a word is enough");
tab = find_words(words);
for(i = 0; i < count_words(words); i++){
    printf("position:%d, word:%c", i, tab[i]);
}
   
}