#include <stdio.h>
#include <stdbool.h>
#include <time.h>
int vpis(int a);
void premikanje(int trenutno,int koncno);
void trenutna(int dvigalo);
int osebje(int f);
int dol(int h);
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
int stevilo=0;
char a=0;
int dvigalo=0;
int trenutno=0;
//loop funkcjij za program
do{
 printf("NA DVIGALU: %i\n",stevilo);
 dvigalo = vpis(dvigalo);
 stevilo=osebje(stevilo);
 premikanje(trenutno,dvigalo);
 trenutna(dvigalo);
 printf(" | NA DVIGALU: %i\n",stevilo);
 trenutno=dvigalo;
 stevilo=dol(stevilo);
 printf("_____________________\n\n");
 fflush(stdin);
}
while(a<10);
}

//funkcija za vpis nadstropja
int vpis(int a){ //funkcija za vpis Stringa ki se pretvori v število
   char k[3];
   int b;
    do{
    b=0;
    printf("Vpisi zeljeno nadstropje: ");
    scanf("%c" , &k);
    
    if(k[0]=='P'){ //pregleda vpisan string in vrne pravo število
     return 0;
    }
    else if(k[0]=='1'){
     return 1;   
    }
    else if(k[0]=='2'){
     return 2;   
    }
    else if(k[0]=='3'){
     return 3;   
    }
    else if(k[0]=='4'){
     return 4;   
    }
    else if(k[0]=='5'){
     return 5;   
    }
    else if(k[0]=='B'){
     return -1;   
    }
    else if(k[0]=='K'){
      return -2;  
    }
    else{
      b++;
    }
    fflush(stdin);
    }while(b>0);
}

void premikanje(int trenutno, int koncno){  //funkcija ki izpisuje znake ob premikanju
    if(trenutno<koncno){
    for(int i=trenutno;i<=koncno;i++){
    if(i==0){
     printf("TRENUTNO NADSTROPJE: P\n");
    }
    else if(i==-1){
     printf("TRENUTNO NADSTROPJE: B\n");
    }
    else if(i==-2){
     printf("TRENUTNO NADSTROPJE: K\n");
    }
    else{
    printf("TRENUTNO NADSTROPJE: %i\n",i);
    }
    delay(1);
    }
    }
    else if(trenutno>koncno){
    for(int i=trenutno;i>=koncno;i--){
    if(i==0){
     printf("TRENUTNO NADSTROPJE: P\n");
    }
    else if(i==-1){
     printf("TRENUTNO NADSTROPJE: B\n");
    }
    else if(i==-2){
     printf("TRENUTNO NADSTROPJE: K\n");
    }
    else if(i>0&&i<6){
    printf("TRENUTNO NADSTROPJE: %i\n",i);
    }
    delay(1);
    } 
    }
    else{
        printf("IZBRALI STE ISTO NADSTROPJE\n"); 
    }

   
}
void trenutna(int dvigalo){  //funkcija ki izpiše znak na katerem je dvigalo
   if(dvigalo>0){
   printf("vi ste na %i nadstropju!",dvigalo);
   }
   else if(dvigalo==0){
    printf("vi ste na P nadstropju!"); 
   }
   else if(dvigalo==-1){
   printf("vi ste na P nadstropju!"); 
   }
   else if(dvigalo==-2){
    printf("vi ste na P nadstropju!"); 
    }
   }

int osebje(int f){ //funkcija ki prišteva osebe
   int prej=0;
   do{
   printf("KOLIKO OSEB GRE NA DVIGALO?: ");
   scanf("%i" ,&prej);
   f=f+prej;
   if(f<0){
      printf("nemore biti manj kot 0 oseb\n");
   }
   if(f>5){
      printf("prevec ljudi limit je 5\n");
   }
   }
   while(f>5||f<0);
   return f;
}

int dol(int h){ //funkcija ki odšteva osebe 
int l;
int b;
  do{
   b=h;
   printf("KOLIKO OSEB GRE DOL?: ");
   scanf("%i" ,&l);
   if(l<=h){
   h=h-l;}
   else{
    b=b-l;
   }
   if(b<0){
      printf("nemore biti manj kot 0 oseb\n");
   }
   }
   while(b<0);
   return h;
}