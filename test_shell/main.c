#include "main.h"


/**
 * main- function main is where the simple shell starts
 * Return: it returns a 0 when successful
*/

int main(int argc, char *argv[])
{
    int i;
    int counter;
    char *buffer;
    char *copied_buffer;
    int token_size;
    char *token;
     char *command = NULL, *actual_command = NULL;
    ssize_t line_read;
    size_t space_count = 0;
    char **argv;
    buffer = malloc(sizeof(char) * space_count);



/***********************************************************/

    while(1){
            if(line_read == (-1)){
                return (-1);
            }
        printf("$ ");
        line_read = getline(&buffer, &space_count, stdin);
        copied_buffer = malloc(sizeof(char) * space_count);

        if (copied_buffer == NULL){
            perror("error");
            return (-1);
        }
        strcpy(copied_buffer, buffer);

        token = strtok(buffer, " \n");

        while(token != NULL){
            token_size++;
            token = strtok(NULL, " \n");
        }
        token_size++;

        argv = malloc(sizeof(char *) * token_size);

        token = strtok(copied_buffer, " \n");

        for(i = 0; token != NULL; i++)
        {
            argv[i] = malloc(sizeof(char) * strlen(token));
            strcpy(argv[i], token);

            token = strtok(NULL, " \n");

        }
        argv[i] = NULL;
        /*****************************************************************/
        //full_path = get_path(argv);
        //./vg-in-placexecute(full_path);







    }
/***********************************************************/



    free(buffer);
    free(copied_buffer);

}



