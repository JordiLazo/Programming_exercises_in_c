#include<signal.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void SignalHandler(int sig){
    if(sig == SIGCONT){
		exit(-1);
	}
}

int main(){
    signal(SIGCONT,&SignalHandler);
    while(1){
        printf("...esperando recibir señales\n");
        sleep(2);
    }
    return 0;
}