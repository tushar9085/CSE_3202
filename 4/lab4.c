#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
int f1,f2,f3,f4,f5,f6,f7;
//First Fork
f1 = fork();

//Left side
if(f1 == 0)
{
printf("Child :: %d  and   Parent :: %d\n",getpid(),getppid());

f3 = fork();
if(f3 == 0)
{
printf("Child :: %d  and   Parent :: %d\n",getpid(),getppid());
}

if(f3>0)
{
f4 = fork();
if(f4 == 0)
{
printf("Child :: %d  and   Parent :: %d\n",getpid(),getppid());
}
}

sleep(20);
}



//Right Side
if(f1>0)
{
f2 = fork();

if(f2 == 0)
{
printf("Child :: %d  and   Parent :: %d\n",getpid(),getppid());

f5 = fork();
if(f5 == 0)
{
printf("Child :: %d  and   Parent :: %d\n",getpid(),getppid());
}

if(f5 > 0)
{

f6 = fork();
if(f6 == 0)
{
printf("Child :: %d  and   Parent :: %d\n",getpid(),getppid());
}
}
}
sleep(10);
}

return 0;
}
