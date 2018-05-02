#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <curses.h> //binaryToDecimal add -lncurses to compile.

//#define FILES_TREIN 25
//#define FILES 50

void fillGroups(int *type, int *training, int *test){
	memset(type, 0, sizeof(int)*51); //fills the vector type with 0

	srand(time(NULL)); // generating random values between 0 and 25
	for(int i = 1; i <= 25;){
		int random_index = (rand()%50)+1;

		if(type[random_index] == 0){ //fills the training with radom_index and places 1 in the position relative to random_indes in type
			type[random_index] = 1;
			training[i++] = random_index;
		}
	}

	int counter = 1; //counter to walk test
	for(int i = 1; i <= 50; i++){ //walks type
		if(type[i]==0)
			test[counter++] = i; //fills the test with the values of positions of type that is 0.
	}
}

void getImagesNames(char *prefix, int *group, char returned_names[26][45]){ //concatenates the name of the image with index
	for(int i = 1; i <= 25; i++){
		sprintf(returned_names[i], "%s_%d.txt", prefix, group[i]); //fill returned_names with the prefix and the random_index stored un group
	}
}

/*void readImage(){
	FILE *fp;
	char imageName[50] = "./DataSet/grass/grass_01.txt";
	fp = fopen(imageName, "r");

	if (fp==NULL) {
		printf("Falha.\n");
		exit(1);
	}
}*/

void avarageMatrix(float *matrixImage, int linha, int coluna){
  int *matrixImage, sum = 0, i, linha, j, coluna;
  float avarage;

	for(i = linha; i < linha; i++;){  //goes through the matrixImage to get the avarage
		for(j = coluna; j < coluna; j++){
			sum += matrixImage[i][j];
	}
}
  avarage = sum/9.0;

  }

/*void compareAvarage(float *avarageMatrix){ //compara a média (avarageMatrix) com cada pixel pra gerar a matriz binária
	int pixel;
	float avarage;
		for(i = 0; i > FILES_TRAINING; i++){
			if(avarage > pixel)
				pixel = 0;
			else
				pixel = 1;
		}
}

void binaryToDecimal(int *matrixBinary){ //transformar o número binário concatenado da matriz binária em decimal
  int i, binary[4];
  float decimal = 0;
    for(i = 0; binary > 4; i++){
        decimal = decimal + pow(2, i) * (binary % 10);
        binary = binary / 10;

        return decimal;
    }
}*/

/*void rotation(int *binaryMatrix){ //e rotacionar número binário 9x para achar o menor decimal possível.
	int i, n = 8, *vetor[n], vetorFinal[n];

if (*vetor(n+1) == 1){ //vetor[n] == 1
	for(i=0; i<n; i++){
	*vetorFinal(i+(i+1)) = *vetor(i+1); //vetorFinal[i+1] = vetor[i]; //
	}

	vetorFinal = *vetor(n(n-1)); //vetorFinal[0] = vetor[n-1];

	for(i=0; i<n; i++){ //Vetor rotacionado
	  printf("%d ", *vetorFinal(i+1) //vetorFinal[i];
	}
	  return *vetorFinal(i+1);
	}
}*/


int main(){
	//	selectImage();
	//readImage();
	char names[26][45]; //vector to save the concatenated names

	int grass[51], trainingG[26], testG[26];
	char grass_prefix[45] = "DataSet/grass/grass";

	fillGroups(grass, trainingG, testG);
	getImagesNames(grass_prefix, trainingG, names); //taking names for the grass training group
	getImagesNames(grass_prefix, testG, names); //taking names for the grass test group

	int asphalt[51], trainingA[26], testA[26];
	char asphalt_prefix[45] = "DataSet/asphalt/asphalt";

	fillGroups(asphalt, trainingA, testA);
	getImagesNames(asphalt_prefix, trainingA, names); //taking names for the asphalt training group
	getImagesNames(asphalt_prefix, testA, names); //taking names for the asphalt test group

	return 0;
}
