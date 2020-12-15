#include "color_switch.h"

/* execution
 * gcc -o test test_color_switch.c color_switch.c game_basis.c led_matrix.c joystick.c -lpthread
 * ./test
   (led_matrix.h(.c) joystick.h(.c) have to exist in game directory)
*/

int main(void){
    
    srand(time(NULL));

    led_matrix_t *led_matrix, led_matrix_v;
    led_matrix = &led_matrix_v;

    open_led_matrix(led_matrix);

    result_t result;

    open_joystick();

    color_switch_game(&result, led_matrix); // call this function to start slide master.

    close_led_matrix(led_matrix);
    return 0;
}