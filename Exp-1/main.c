#include <stdio.h>
#include <stdlib.h>
int num=1;

void input(int arr[10][10],int n){
    int i,j;
    printf("Enter Matrix: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    num++;
}

void traspose(int arr[10][10],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}


void add(int a[10][10],int b[10][10],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}

void multiply(int a[10][10],int b[10][10],int n){
    int c[10][10],k,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=0;
            for(k=0;k<n;k++){
                  c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10],b[10][10],d,n=3;
    printf("Enter Order:");
    scanf("%d",&n);
    printf("Enter\n1. Add\n2. Transpose\n3. Multiply\n");
    scanf("%d",&d);
    switch(d){
        case 1: input(a,n);
                input(b,n);
                add(a,b,n);
                break;
        case 2: input(a,n);
                traspose(a,n);
                break;
        case 3: input(a,n);
                input(b,n);
                multiply(a,b,n);
                break;
    }
    return 0;
}

