#include <stdio.h>

int main(){
int a, i;
a = 1;
i = 0;
while(i < 10){
    a = a << 1;
    printf("%d\n", a);
    i++;
}

return (0);
}
