#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void selectImage(){
	int image[25];

	srand(time(NULL)); // gerando valores aleatorios entre zero e 25
	for(int i = 0; i < 25; i++){
		image[i]= (rand()%25)+1;
		printf("%d ", image[i]);
	}
}

void readImage(){
	FILE *fp;
	char imageName[50] = "./DataSet/grass/grass_01.txt";
	fp = fopen(imageName, "r");
}


int main(){
	selectImage();
	readImage();
	return 0;
}
