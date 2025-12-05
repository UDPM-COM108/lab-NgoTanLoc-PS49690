#include<stdio.h>

int main() {
 //1.Mang 1 chieu
 
    //khoi tao mang 1 chieu
    /*int a[4];
    //Nhap mang 1 chieu
    for (int i=0;i<4;i++)
    {
        printf("Nhap mang a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    //Xuat mang 1 chieu
    for(int i=0;i<4;i++){
        printf("Mang a bao gom %d\n",a[i]);
    }

 //2.Mang 2 chieu

    //khoi tao mang 2 chieu
    int a[3][3];
    //Nhap mang 2 chieu
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            printf("Nhap mang a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //Xuat mang 2 chieu
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Mang a[%d][%d] bao gom %d\n",i,j,a[i][j]);
        }
    }


 //3.sap xep tang dan hoac giam dan

    int a[7]={8,2,6,2,9,1,5};
    int i, j,temp;
    for(i=0;i<6;i++){
        for(j=i+1;j<7;j++){
            if(a[i]>a[j]) //sap xep tang dan
                //if(a[i]<a[j]){ //sap xep giam dan
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");*/

 //4.khoi tao mang hai cheu bang cach gan gia tri

    int i=0,j=0;
    int matran[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",matran[i][j]);
        }
        printf("\n");
    }
    return 0;    
}

