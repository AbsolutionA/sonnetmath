#include <stdio.h>
#include <time.h>
#include <float.h>

#include "../include/vector4.h"
#include "../include/mat4x4.h"

int main () {

        vec4 v0 = {1.00023f, 1.0002f, 1.00056f, 1.00014f};
        vec4 v1 = {1.00045f, 1.0003f, 1.0003f, 1.0002f};
        vec4 v2 = {1.00043f, 1.00025f, 1.00022f, 1.00021f};
        vec4 v3 = {1.00065f, 1.0002f, 1.00022f, 1.00041f};

        mat4x4 m0 = mat4x4_create(&v0, &v1, &v2, &v3);
        mat4x4 m1 = mat4x4_create(&v1, &v0, &v3, &v2);

        for (int i = 0; i < 64; ++i) {  
                        m1 = mat4x4_mult(&m0, &m1); 
                        printf("Bytes: %lld\n", sizeof(m1.t[0][0]));
                        printf("[%d] The sum Number %f, %f, %f, %f\n", i, m1.t[0][0], m1.t[0][1], m1.t[0][2], m1.t[0][3]);
                        printf("[%d] The sum Number %f, %f, %f, %f\n", i, m1.t[1][0], m1.t[1][1], m1.t[1][2], m1.t[1][3]);
                        printf("[%d] The sum Number %f, %f, %f, %f\n", i, m1.t[2][0], m1.t[2][1], m1.t[2][2], m1.t[2][3]);
                        printf("[%d] The sum Number %f, %f, %f, %f\n", i, m1.t[3][0], m1.t[3][1], m1.t[3][2], m1.t[3][3]);
        }
        return 0;
}