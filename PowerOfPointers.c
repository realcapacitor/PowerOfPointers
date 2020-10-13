#include<stdio.h>
typedef struct{
	char name[15];
	long num;
}con;


int main(){
    //Power of Pointers
	//Creating database: Contacts
		con c1;

		char* ptrc=&c1.name;
		long* ptri=&c1.num;


		int v=0;
		for(int w=0;w<120;w=w+24){
			printf("Enter name: ");
			scanf("%s",(ptrc+w));
			printf("Enter num: ");
			scanf("%ld",(ptri+v));
			v=v+3;
		}
		int z=0;
		for(int yo=0;yo<120;yo=yo+24){
			printf("Name: %s\t",(ptrc+yo));
			printf("Number: %ld\n",*(ptri+z));
			z=z+3;
		}

    
    return 0;
}