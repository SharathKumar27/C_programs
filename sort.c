#include <stdio.h>
sort(){
    int num[25];
    int a, j, i, n;
    
    // Asking for input
    printf("\nEnter total no. of elements: ");
    scanf("%d", &n);
    
    printf("\nEnter the numbers one by one\n");
    for (i = 0; i < n; ++i){
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (num[i] > num[j]){
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("\nNumbers in ascending order: \n");
    for (i = 0; i < n; ++i){
        printf("%d\n", num[i]);
    }
//    return 0;
}
