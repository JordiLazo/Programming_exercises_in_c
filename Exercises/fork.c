#include<stdio.h>
#include<unistd.h>

int main (void){
    int pid_father;
    int pid_son;

    printf("***Process PID = %d starts in ***", getpid());
    pid_son = fork();

    printf("Process PID = %d executing\n", getpid());
}