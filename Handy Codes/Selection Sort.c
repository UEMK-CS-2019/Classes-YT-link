#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size,iter,count=0;
    scanf("%d%d",&size,&iter);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<(size-1);i++) {
        int idx=i;
        count=count+1;
        for(int j=i+1;j<size;j++) {
            if (arr[j] < arr[idx]) {
                idx=j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp; 
        if(count==iter) {
            break;
        }
    }
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
