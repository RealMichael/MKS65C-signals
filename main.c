#include <stdio.h>
#include <unistd.h>
#include <signal.h>



static void sighandler(int signo){
    if(signo == SIGINT){
        printf("Exited due to SIGINT");
        exit(0);
        }

    if(signo == SIGUSER1){
        printf("getppid()");
        }

    }
int main(){
    int i = 0;
    while(i < 5){
      printf("Process PID- %d\n",getpid());
      sleep(1);
      signal(Sig)
    }
}
