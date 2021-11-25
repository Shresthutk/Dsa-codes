#include<stdio.h>
#include<stdlib.h>
struct arr{
    int total_size;
    int used_size;
    int* ptr;
};
void createArr(int tSize,int uSize,struct arr *a){
    a->total_size=tSize;
    a->used_size=uSize;
    a->ptr=(int*)malloc(tSize*sizeof(int));
}
void setData(struct arr *a){
    for(int i=0;i<(a->used_size);i++){
        printf("Enter the value for index %d: ",i);
        scanf("%d",((a->ptr)+i));
    }
}
void getData(struct arr *a){
    for(int i=0;i<(a->used_size);i++){
        printf("%d ",(*(a->ptr)+i));
    }
}

int main(){
 struct arr marks; 
 createArr(15,4,&marks);
 setData(&marks);
 getData(&marks);
}