#include <stdio.h>

int main(void){
    FILE *fp;
    char c;

    fp = fopen(__FILE__,"r");

    while ((c = getc(fp)) != EOF)
        printf("%02hhx ", c);

    fclose(fp);
    return 0;
}
