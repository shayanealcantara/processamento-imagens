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

<<<<<<< HEAD
for (i = 0; i < 25; i++)
     {
  /* gerando valores aleatorios entre zero e 25
  printf("%d ", rand() % 25);
 */
}





if (fp==NULL) {
printf("Falha.\n");
exit(1);
=======
>>>>>>> fd72f16d27b0dc294a86af3ddd1e9e097c330f53

int main(){
	selectImage();
	readImage();
	return 0;
}
