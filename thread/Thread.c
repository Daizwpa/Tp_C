#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void *entry_point(void *value){
    printf("hello from second thread\n");
    return null;
}
int main(int argc, char **argv){
    pthread_t thread;
    int num = 123;
    printf("hello world!!!\n");
    pthread_create(&thread, NULL, entry_point, &num);

    pthread_join(thread, NULL);
    return EXIT_SUCCESS;
}