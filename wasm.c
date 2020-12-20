#include <emscripten.h>

int EMSCRIPTEN_KEEPALIVE addnum(int a,int b){
    return a+b;
}
