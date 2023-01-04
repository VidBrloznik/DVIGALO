#include <stdio.h>
#include <stdbool.h>
#include <time.h>
int vpis(int a);
void premikanje(int trenutno,int koncno);
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
int dvigalo=0;
int trenutno=0;
//loop funkcjij za program
do{
 dvigalo = vpis(dvigalo);
 premikanje(trenutno,dvigalo);
 printf("vi ste na %i nadstropju!\n",dvigalo);
trenutno=dvigalo;
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

void premikanje(int trenutno, int koncno){ //funkcija za izpis med premikanjem dvigala
    if(trenutno<koncno){  //izpis navzdol če gre dvigalo dol
    for(int i=trenutno;i<=koncno;i++){
    printf("TRENUTNO NADSTROPJE: %i\n",i);
    delay(1);
    }
    }
    else if(trenutno>koncno){//izpis navzgor če gre dvigalo gor 
    for(int i=trenutno;i>=koncno;i--){
    printf("TRENUTNO NADSTROPJE: %i\n",i);
    delay(1); //zamik med izpisi 1s
    } 
    }
    else{
        printf("IZBRALI STE ISTO NADSTROPJE\n");
    }
}