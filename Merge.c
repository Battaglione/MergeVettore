#include <stdio.h>
#include <stdlib.h>
#define N1 1000
#define N2 1000
#define N3 2000   
int main(){

    int V1[N1], V2[N2], V3[N3], i1, i2, temp, max1, max2, max3;    
    do{
        printf("Quanti numeri vuoi inserire per il primo vettore? MAX 1000\n");
        scanf("%d", &max1);
    }while(max1 < 0 || max1 > 1000);


    for(i1 = 0; i1 < max1;i1++){             //Input vettore 1
        printf("Inseriscri il %d elemento del primo vettore\n",i1 + 1);
        scanf("%d",&V1[i1]);
    }

    do{
        printf("Quanti numeri vuoi inserire per il secondo vettore? MAX 1000\n");
        scanf("%d", &max2);
    }while(max2 < 0 || max2 > 1000);

    for(i1 = 0; i1 < max2; i1++){             //Input vettore 2
        printf("Inseriscri il %d elemento del socondo vettore\n",i1 + 1);
        scanf("%d",&V2[i1]);
    }
    max3 = max1 + max2;
    for(i1 = 0; i1 < max1; i1++){        //Merge (Parte 1; primo vettore)
        V3[i1]=V1[i1];
    }

    i2 = 0;

    for(i1 = max1; i1 < max3; i1++){      //Merge (Parte 2; secondo vettore)
        V3[i1]=V2[i2];
        i2++;
    }
    
    for(i1 = 0; i1 < max3; i1++){       //Ordinamento vettore     
        for(i2 = i1 + 1; i2 < max3; i2++){
            if(V3[i2] < V3[i1]){
                temp = V3[i1];
                V3[i1] = V3[i2];
                V3[i2] = temp;
            }
        }
    }
    printf("Il vettore finale e' il seguente: \n");    //Output del terzo vettore
    for(i1 = 0; i1 < max3; i1++){
        printf("\n%d",V3[i1]);
    }
    printf("\n");
    return 0;
}