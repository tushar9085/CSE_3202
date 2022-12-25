#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{

    int pid1 = fork();

    if (pid1 > 0)
    {
        // form main parent

        printf("\nThis is Root parent ,Pid is %d \n", getpid());
        int pid2 = fork();
        if (pid2 == 0)
        {
            // sleep(10);
            printf("This is Child 4 pid %d with parent %d\n", getpid(), getppid());
            int pid5 = fork();
            if (pid5 == 0)
            {
                printf("this is child 5 pid %d with parent %d\n", getpid(), getppid());
            }
            if (pid5 > 0)
            {
                // sleep(10);
                int pid6 = fork();
                if (pid6 == 0)
                {
                    printf("This is child 6 pid %d with parent %d\n", getpid(), getppid());
                }
            }
        }
        sleep(50);
    }
    if (pid1 == 0)
    {
        // this is child 1
        printf("This is child 1 pid %d with parent %d\n", getpid(),getppid());
        int pid3 = fork();
        if (pid3 == 0)
        {
            printf("This is child 2 pid %d with parent %d\n", getpid(), getppid());
        }
        if (pid3 > 0)
        {
            int pid4 = fork();
            if (pid4 == 0)
            {
                printf("This is Child 3 pid %d with parent %d\n", getpid(), getppid());
            }
        }
        sleep(30);
    }
    // printf("Hello world!\n %d", getpid());
    return 0;
}