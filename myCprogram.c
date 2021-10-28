//isim yazma
#include<stdio.h>

// gulo global bir variable'dır
int gulo = 18;


// myfunc input aldıgı degerin karesini alır
int myfunc(int x){
	
	int ozan = 27;
	
	//printf("%d %d\n", ozan,gulo);
	
	return x*x;
	
}

// topla input aldıgı degerlei toplar alır
int topla(int x, int y){
	return x+y;
}


int main (){
	printf("GULFEM\n");
	
	// yas ve sayi main fonksiyonu scope'undaki int variable'lardır
	int yas = 17;
	int sayi = 2;
	
	// fonksiyon cagırma sekli
	int karesi = myfunc(yas);
    int toplami=topla(yas,sayi);
	
	printf("%d, %d ,%d \n", yas , karesi, toplami ); 
	
	// if else yapısı ve if içerisinde or kullanıldı
	if(yas == 18 || sayi==2){
		printf("yasimız 18dir \n");
	}
	else{
		printf("yasımız 18 değil \n");
	}
	
	// for döngüsü ile myfunc 5 kere cagırıldı.
	for(int i=0; i<5; i = i+1){
		printf("%d\n", myfunc(i));
	}
	

	// array operations
	int dizi[3] = {23,45,66}; 
	
	printf("%d, %d, %d\n", dizi[0], dizi[1], dizi[2]);
	
	dizi[2] = 50;
	
	printf("%d, %d, %d, %f\n", dizi[0], dizi[1], dizi[2], 12.78);
	
	
	// string 
	char name[] = "guloooo asjdhash asdkhasdkh";
	printf("%s", name);
	
	

	return 0;
}
