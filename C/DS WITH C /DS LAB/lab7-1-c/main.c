#include<stdio.h>
int main(){
    int mtrx[10][10], r, c, i, j, ele;
    printf("Enter matrix size:");
    scanf("%d%d",&r,&c);
    printf("Enter %d X %d matrix elements:\n",r,c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&mtrx[i][j]);
    printf("Enter search element:");
    scanf("%d",&ele);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(mtrx[i][j]==ele)
                break;
        }
        if(j!=c)
            break;
    }
    if(i!=r && j!=c)
        printf("%d element is found at %d-row and %d-column.\n",ele,i,j);
    else
        printf("%d element is not found.\n",ele);
}


