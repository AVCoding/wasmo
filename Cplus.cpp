

#include <stdio.h>
#include <emscripten.h>
#include <stdlib.h> 

#include <math.h>


#include <iostream> 

extern "C" {

    EMSCRIPTEN_KEEPALIVE
    float addNums (float *buffer, int bufSize) {
        float total = 0;

        for (int i=0; i<bufSize; i++) {
            total+= buffer[i];
        }

        return total;
    }

    EMSCRIPTEN_KEEPALIVE
    int8_t* doubleValues (int8_t *buf, int bufSize) {

        int8_t values[bufSize];

        for (int i=0; i<bufSize; i++) {
            values[i] = buf[i] * 2;
        }

        auto arrayPtr = &values[0];
        return arrayPtr;
    }
    

    // EMSCRIPTEN_KEEPALIVE
    // int8_t* changeArr (int8_t *buf, int bufSize) {
    //     int out_array[bufSize];

    //     for (int i=0; i<bufSize; i++) {
    //         out_array[i] = buf[i] * 2;
    //     }

    //     // auto arrayPtr = &values[0];
    //     return out_array;
    // }
}

// EMSCRIPTEN_KEEPALIVE
// int reversenumber(int n) { 
//    int reverse=0, rem; 
//    while(n!=0) { 
//       rem=n%10; reverse=reverse*10+rem; n/=10; 
//    } 
//    return reverse; 
// }

// extern "C" {

//    int int_sqrt(int x) {
//     return sqrt(x);
//     }

// }


