#include <stdio.h>
#include <stdlib.h>

#include <conio.h>
#include <time.h>
#define XXX 20
#define YYY 20
#define KUTU 20

int map[XXX][YYY];

int i=0,j=0;

//void cisim(int xx,int yy);



int main(){
// int argc, char** argv


	initgraph(&a,&b,"C:\\TC");
	
	FILE *dosya;//Harita Okunuyor
	dosya=fopen("map.txt","r");
	
	while(!feof(dosya)){//Matrisi Olustur
	for(int j=0;j<YYY;j++){
	fscanf(dosya,"%d ",&map[i][j]);	
	}i++;}
	
	for(i=0;i<XXX;i++){
		for(j=0;j<YYY;j++){
		printf("%d ",map[i][j]);
		}printf("\n");
	}
	
	for(i=0;i<XXX;i++){// Kutulari Ciz
		for(j=0;j<YYY;j++){
		if(map[i][j]==1)
		bar(j*KUTU,i*KUTU,j*KUTU+KUTU,i*KUTU+KUTU);
		}
	}
int x,y,adim,yon;
x=200; 
y=370;
adim=5;
	//cleardevice();
    bar(x-5,y-5,x+5,y+5);
	
	setcolor(12);
	while(1==1){
		

 const int tus = getch();

/*
 if(tus==100 && !cisim(x+adim,y)==1) {//d
 x=x+adim; circle(x,y,5); 	
 }else if(tus==97 && !cisim(x-adim,y)==1){//a
  x=x-adim; circle(x,y,5); 	
 }else if(tus==119 && !cisim(x,y-adim)==1){//w
  y=y-adim; circle(x,y,5); 	
 }else if(tus==115 && !cisim(x,y+adim)==1){//s
  y=y+adim; circle(x,y,5); 	
 }
  */
    
 
   
    
    
	}
	
	
	
	
    
    
    fclose(dosya);
	while( !kbhit() ); 
  
	closegraph( );
    
	return 0;
}
/*
void cisim(int xx,int yy){
	for(int i=0;i<XXX;i++){// Kutulari Ciz
		for(int j=0;j<YYY;j++){
		if(map[i][j]==1){
		if(xx>j*KUTU && xx<j*KUTU+KUTU && yy>i*KUTU && yy<i*KUTU+KUTU){
		return 1;
	}}}}}

*/
