
#include<stdio.h>
int main(){
	int i,j;
	int scores[2][2]={ {65,92},{84,72}};
	for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	printf("scores[%d][%d]= %d \n",i,j,scores[i][j]);
}
}
int scores1[2][2]={{35,70},{59,67}};
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("scores[%d][%d] = %d \n",i,j,scores1[i][j]);
	}
}
return 0;
}