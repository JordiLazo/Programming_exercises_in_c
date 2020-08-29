#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(){

    int pid = fork();

    if(pid < 0){
        perror("fork error");
        exit(-1);
    }

    if(pid != 0){
        printf("I am the father %d my child is %d\n", getpid(),pid);
        wait(NULL);
    }
    if(pid == 0)
    {
        printf("I am the child %d and my father is %d\n",getpid(),getppid());
    }
    sleep(60);
    
}