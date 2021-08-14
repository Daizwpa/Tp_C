#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    printf("argc = %d", argc);
    printf("\ncontent argv :");
    for(int i = 0; i < argc; i++){
        printf("\nargv[%d] = %s", i, argv[i]);
    }
    return argc;

}// end main()