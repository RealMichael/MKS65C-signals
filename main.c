#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <fcntl.h>

static void sighandler(int signo){
    if(signo == SIGINT){
	char ErrText[100] = "Exited due to SIGINT\n";
	int fd = open("err.txt", O_APPEND | O_WRONLY | O_CREAT,0666);
        
	write(fd,ErrText,100);
	close(fd);
        exit(0);
        }

    if(signo == SIGUSR1){
        printf("Parent PID %d\n" ,getppid());
        }

    }
int main(){
    signal(SIGINT, sighandler);
    signal(SIGUSR1,sighandler);
    int i = 0;
    while(i < 5){
      printf("Process PID- %d\n",getpid());
      sleep(1);
     // signal(Sig)
    }
}
