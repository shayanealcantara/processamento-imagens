#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <curses.h> //binaryToDecimal add -lncurses to the compile.

void selectImage(){
	int image[25];

	srand(time(NULL)); // generating random values between 0 and 25
	for(int i = 0; i < 25; i++){
		image[i]= (rand()%25)+1;
		printf("%d ", image[i]);
	}
}

void readImage(){
	FILE *fp;
	char imageName[50] = "./DataSet/grass/grass_01.txt";
	fp = fopen(imageName, "r");

  if (fp==NULL) {
  printf("Falha.\n");
  exit(1);
  }
}

/*void avarageMatrix(*int number, *int MAX){
  int number[], sum;
  float avarage;

  sum = number[]+= sum;
  avarage = (sum)/9.0;

}*/

void binaryToDecimal(*int mBinary){
  int i, binary[4];
  float decimal = 0;
    for(i = 0; binary > 4; i++){
        decimal = decimal + pow(2, i) * (binary % 10);
        binary = binary / 10;

        return decimal;
    }
}


int main(){
	selectImage();
	readImage();
	return 0;
}
