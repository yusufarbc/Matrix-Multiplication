#include <stdio.h>

//matris çarpimi uygulamasi

void main(){

printf("|----------Hello There----------|\n\n----matris carpim uygulamasi----\n\n");  // selamlama mesajı

int m1line, m1column, m2line, m2column;

while(1){
    printf("1. matrisin satir sayisini giriniz\n");
    scanf("%d",&m1line);

    printf("1. matrisin sutun sayisini giriniz\n");
    scanf("%d",&m1column);

    printf("2. matrisin satir sayisini giriniz\n");
    scanf("%d",&m2line);

    printf("2. matrisin sutun sayisini giriniz\n");
    scanf("%d",&m2column);

    if(m1column!=m2line)
        printf("1.matrisin sutun sayisiyle, 2. matrisin satir sayisi ayni olmalidir\n\nlutfen tekrar deneyiniz\n\n");
    else
        break;
}

//matris 1
int matrix1[m1line][m1column]; //1. matrisimizin tanımlanması

//matris değerlerini alma
printf("--1.matrisin indis degerlerini girin--\n");
for(int i=1;i<=m1line;++i){
    for(int j=1;j<=m1column;++j){
        printf("[%d,%d]-->",i,j);
        scanf("%d",&matrix1[i][j]);
    }
}
//matrisi ekrana yazdırma
printf("\n|-------1.matris-------|\n\n");
for(int i=1;i<=m1line;++i){
    for(int j=1;j<=m1column;++j){
        printf(" %3d ",matrix1[i][j]);
    }
    printf("\n\n");
}

//matris 2
int matrix2[m2line][m2column]; //2. matrisimizin tanımlanması

//matris değerlerini alma
printf("\n\n--2.matrisin indis degerlerini girin--\n");
for(int i=1;i<=m2line;++i){
    for(int j=1;j<=m2column;++j){
        printf("[%d,%d]-->",i,j);
        scanf("%d",&matrix2[i][j]);
    }
}
//matrisi ekrana yazdırma
printf("\n|-------2.matris-------|\n\n");
for(int i=1;i<=m2line;++i){
    for(int j=1;j<=m2column;++j){
        printf(" %3d ",matrix2[i][j]);
    }
    printf("\n\n");
}

//çarpım sonuç matrisimiz
int matrixend[m1line][m2column]; //çarpım sonuç matrisimizin tanımlanması

for(int i=1;i<=m1line;++i){
    for(int j=1;j<=m2column;++j){
            matrixend[i][j]=0;
        for(int k=1;k<=m1column;++k){ //çarpım işleminin döngüsü
            matrixend[i][j] += matrix1[i][k]*matrix2[k][j];  //çarpım işlemi
        }
    }
}
//sonuç matrisinin ekrana yazılması
printf("\n\n|-carpim sonuc matrisi-|\n\n");
for(int i=1;i<=m1line;++i){
    for(int j=1;j<=m2column;++j){
        printf(" %3d ",matrixend[i][j]);
        }
        printf("\n\n");
    }
}
