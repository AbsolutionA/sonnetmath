#include <stdio.h>
#include <time.h>

#include "../include/vector4.h"

int main () {

        

        f32 a = 5.1, b = 4.2, c = 4.72;
        vec4 v2[100000];
        for (int i = 0; i < 100000; ++i) {
                
                
                v2[i].x = a+i+5;
                v2[i].y = b+i+5;
                v2[i].z = c+i+5;
                v2[i].w = c+i+5;
                vec4_square_vroot(&v2[i]);
                printf("The sum Number %f, %f, %f, %f\n", v2[i].x, v2[i].y, v2[i].z, v2[i].w);
        }
        return 0;
}