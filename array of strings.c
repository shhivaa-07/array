#include<stdio.h>
#include<string.h>
int main(){
    char cars[]={"velar","evoque","endevour"};
    strcpy(cars[0],"tesla");
    for(int i=0;sizeof(cars)/sizeof(cars[0]);i++){
        printf("%d\n",cars[i]);
    }
    return 0;
}
