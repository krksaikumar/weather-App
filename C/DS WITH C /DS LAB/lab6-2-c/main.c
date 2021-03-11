#include<stdio.h>
int main(){
    int mtrx[10][10],r,c,i,j,temp;
    printf("Enter matrix size:\n");
    scanf("%d %d",&r,&c);
    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&mtrx[i][j]);
    if(r>=c){
     for(i=0;i<c;i++){
         for(j=0;j<r;j++){
             if(j>i){
                 temp = mtrx[i][j];
                 mtrx[i][j] = mtrx[j][i];
                 mtrx[j][i] = temp;
             }
         }
     }
    }
    else{
     for(i=0;i<r;i++){
         for(j=0;j<c;j++){
             if(j>i){
                 temp = mtrx[i][j];
                 mtrx[i][j] = mtrx[j][i];
                 mtrx[j][i] = temp;
             }
         }
     }
    }
    printf("Transpose of the given matrix is\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++)
            printf("%d ",mtrx[i][j]);
        printf("\n");
    }
    return 0;
}
