#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{

    int pid1 = fork();

    if (pid1 > 0)
    {
        

        printf("\nThis is Root parent ,Pid is %d \n", getpid());
        
        int pid2 = fork();
       
        if (pid2 == 0)
        {
            printf("This is child 2 pid %d with parent %d\n", getpid(), getppid());
        }
       
       sleep(20);
    }
    if (pid1 == 0)
    {
        
        printf("This is child 1 pid %d with parent %d\n", getpid(),getppid());
        
       sleep(20);
       
    }

    return 0;
}