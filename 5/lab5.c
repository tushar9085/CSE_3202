#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

int a[10];
int count=0;
//gcc file_name.c -lpthread  ---- to compile from terminal

void* producer()
{
    while(1)
    {
        int x;
        x = rand()%60;
        a[count] = x;


        if(count <= 10)
        {
            printf("Produced Item is %d\n",x);
        }

        count++;


        sleep(1);
    }

}

void* consumer()
{

    while(1)
    {
        int y;
        y = a[count-1];

        count--;

        if(count <= 10)
        {
            printf("Consumed item is %d\n",y);
        }

        sleep(1);

    }
}


int main()
{
    pthread_t t1, t2;


    pthread_create(&t1, NULL, &producer, NULL);

    pthread_create(&t2, NULL, &consumer, NULL);

    //Main thread waits untill the prducer executes
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);


    return 0;
}
