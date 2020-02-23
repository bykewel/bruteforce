#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
	
	printf("\t\t##### BRUTE FORCE #####\n");

	int dif;
	printf("Parolanin zorluk seviyesini giriniz:\n");
	printf("1)Kolay(sadece rakamlardan olusur) \t 2)Zor(rakam ve harflerden olusur)\n");
	scanf("%d",&dif);
	
	if(dif==1){
		int i,j,parola_len,exit=0;
		int parola[13], tahmin[13];
		double total_time;
		clock_t start, end;
		
		printf("##### BRUTE FORCE #####\n");
		
		printf("Parolanizin uzunlugunu giriniz(Min: 4 -- Max: 12): ");
		scanf("%d",&parola_len);
		printf("\n");
		
		int kontrol=0;
		
		while(kontrol == 0){
			if(parola_len < 4  || parola_len > 12){
				printf("HATA! Lutfen verilen aralikta bir deger giriniz:");
				scanf("%d",&parola_len);						
			}
			else{
				kontrol = 1;
			}
		}
		
		srand(time(NULL));
		
		for(i=0;i<parola_len;i++){
			
			parola[i]=rand()%10;	
		}
		
		int adim =0;
		
		start = clock();
	
		while(exit == 0){
			
			for(i=0;i<parola_len;i++){
			
				tahmin[i]=rand()%10;	
			}
			
			for(i=0;i<parola_len;i++){
				if(tahmin[i] != parola[i]){
					exit=0;
					i=parola_len;
				}
				else{
					exit=1;
				}		
							
			}
			
			adim++;
			
		}
		
		end = clock();
		total_time = ((double) (end - start)) / CLK_TCK;
		
		printf("Parola:");
		for(i=0;i<parola_len;i++){
			printf("%d",parola[i]);	
		}
		printf("\n");
		
		printf("Parolayi bulmasi %lf saniye surdu.\n", total_time);
		
		printf("Parolayi bulmasi %d adim surdu.",adim);		
	}
	if(dif==2){
	
	int i,j,parola_len,exit=0,index;
	char parola_data[35] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','v','y','z','w','x','1','2','3','4','5','6','7','8','9','0'};
	char parola[13];
	char tahmin[13];
	double total_time;
	clock_t start, end;
	
	printf("Parolanizin uzunlugunu giriniz(Min: 4 -- Max: 12): ");
	scanf("%d",&parola_len);
	printf("\n");
	
	int kontrol=0;
	
	while(kontrol == 0){
		if(parola_len < 4  || parola_len > 12){
			printf("HATA! Lutfen verilen aralikta bir deger giriniz:");
			scanf("%d",&parola_len);						
		}
		else{
			kontrol = 1;
		}
	}
	
	
	
	
	srand(time(NULL));
	
	for(i=0;i<parola_len;i++){
		index =rand()%35;
		parola[i]=parola_data[index];
	}

	
	int adim =0;
	
	start = clock();

	while(exit == 0){
		for(i=0;i<parola_len;i++){
			index =rand()%35;
			tahmin[i]=parola_data[index];	
		}
		
		for(i=0;i<parola_len;i++){
			if(tahmin[i] != parola[i]){
				exit=0;
				i=parola_len;
			}
			else{
				exit=1;
			}		
						
		}
		
		adim++;
		
	}
	
	end = clock();
	total_time = ((double) (end - start)) / CLK_TCK;
	
	printf("Parola:");
	for(i=0;i<parola_len;i++){
		printf("%c",parola[i]);	
	}
	printf("\n");
	
	printf("Parolayi bulmasi %lf saniye surdu.\n", total_time);
	
	printf("Parolayi bulmasi %d adim surdu.",adim);
	}
	return 0;
}
