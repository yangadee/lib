#include <stdio.h>
#include <stdint.h>

int main(){
uint8_t N = 255;
N|=N>>1;
N|=N>>2;
N|=N>>4;
N = (N+1)>>1;
printf("N = %d\n", N);
printf("print %*c%*c \n", 5,' ',6, ' ');
}
