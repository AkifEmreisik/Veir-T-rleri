#include<iostream>

int main(){
	char d='D'; 
	std::cout<<d<< std::endl; // D yazacak
	int a='D';
	std::cout<<a<< std::endl; //68 yazar a n�n int de�erini yazd� 
	char f[]="Hello";
	std::cout<<f<< std::endl; //char a gidip yaz�yor
	unsigned short x (65537); // unsigned short en fazla 65535 al�r 36 da 0 37 de 1 yaz�yor 
	std::cout<<x<< std::endl;
	unsigned int m = 3;
	unsigned int n{2}; // unsigned int eksi olmayan i�aretsiz demek
	std::cout<<m+n<< std::endl;
	float p{12345678.9};
	std::cout<< p <<std::endl;
	return 0;
	
	
}
