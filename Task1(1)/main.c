#include <stdio.h>
#include <stdbool.h>
#include <time.h>
int vpis(int a);
int premikanje(int b);


void delay(int number_of_seconds)
{
// Converting time into milli_seconds
int milli_seconds = 1000 * number_of_seconds;// Storing start time
clock_t start_time = clock();
// looping till required time is not achieved
while (clock() < start_time + milli_seconds);
}


int main(){
//dekleracija
int a=0;
int dvigalo;
int konec1=0;

//loop funkcjij za program
do{
 dvigalo = vpis(dvigalo);
 printf("vi ste na %i nadstropju!\n",dvigalo);
 delay(1);
}
while(a<10);

}

//funkcija za vpis nadstropja
int vpis(int a){
    do{
    printf("Vpisi zeljeno nadstropje: ");
    scanf("%i" , &a);
    if(a<-2||a>5){
        printf("NADSTROPJE NE OBSTAJA (OD -2 DO 5)\n");
    }
    }
    while(a<-2||a>5);
    return a;
}
