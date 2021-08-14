#include <stdio.h>
#include <stdlib.h>

void rec (int T[], int i, int j){
    if(j > i){
        int z = 0;
        int cup = 0;
        for(int k = i; k<=(i+j)/2; k++){
            cup = T[z +1+ (i+j)/2];
            T[z +1+ (i+j)/2] =T[k] ;
            T[k] = cup;
            z++;
        }
        int center = (i+j)/2;
        rec (T, i, center );

        rec (T, center +1 , j);
    }
}
void main(){
    int T[4] = {0,1,2,3};
    
   
    rec (T, 0, 3);
     for(int i = 0; i<4; i++){
            printf("%d, ", T[i] );
    }
}