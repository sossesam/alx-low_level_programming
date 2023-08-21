#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;


char *find_path(char *cmd){
char **new_path;
char *path = getenv("PATH");
int length = strlen(path);
new_path = malloc(sizeof(char *) * length);

return path;
}



char *str_con(char *buffer){

    int length = strlen(buffer);
    buffer[length - 1] = '\0';
return buffer;
}


int exec_cmd(char *string){
    pid_t pid;
    char *args[]={string,NULL,NULL};

    pid = fork();
    if(pid == 0){
        if(execve(args[0], args, NULL) == -1){
            perror("./shell");
        }
    }else{
        wait(NULL);
    };

    return 0;
}




int main(void){
    char *string;
    char *new_string;
    size_t count = 0;
    string = NULL;
    size_t input;
    pid_t pid;

    while(1)
    {
        printf("#cisfun$ ");
        if(input == -1 || input == EOF){
            return -1;
        }

        input = getline(&string, &count, stdin);
        new_string = str_con(string);


            exec_cmd(new_string);
            wait(NULL);

    printf("%s\n", new_string);
    

    }

 return EXIT_SUCCESS;
}
