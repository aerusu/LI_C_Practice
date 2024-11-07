//micah li

/*
Things I am learning in Sequence 1:
-Macros (#define)
-Enumerations
-Typedef
-References & Pointers
-Structs
*/
#include <stdio.h>
#include <stdint.h>

enum traffic_light_color {RED, YELLOW, GREEN};
typedef enum traffic_light_color traffic_light_t;

int main(){
    uint16_t c;
    enum traffic_light_color light16 = RED;
    enum traffic_light_color light31 = GREEN;
    return 0;
}