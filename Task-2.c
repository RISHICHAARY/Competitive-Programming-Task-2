#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c[6]={1,2,3,4,5,6};
    int a,b;
    printf("Enter index: ");
    scanf("%d",&a);
    printf("Enter element to be inserted: ");
    scanf("%d",&b);
    for(int i=6;i>a;i--){
        c[i]=c[i-1];
    }
    c[a]=b;
    for(int i=0;i<=6;i++){
        printf("%d ",c[i]);
    }
    return 0;
}
