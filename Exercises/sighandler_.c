#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void MYSignalHandler(int sig){
    printf("Signal number is %d\n",sig);
}
int main(void){
    signal(SIGIO, &MYSignalHandler);
    while(1){
        printf("zzzZZZzzz\n");
        sleep(2);
    }
    return 0;
}