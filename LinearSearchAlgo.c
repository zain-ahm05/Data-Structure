#include <stdio.h>

int LinearSearch (int arr [], int n, int key){
    for (int i = 0; i<n; i++){
        if (arr [i] == key)
        return i ;
    }
    return -1;
}
int main (){
    int arr [] = {10,25,30,45,50};
    int key = 45;
    int result = LinearSearch (arr, 5, key);
    if (result != -1)
    printf ("Element at index %d\n", result);
    else printf ("Element not found\n");
    return 0;
}