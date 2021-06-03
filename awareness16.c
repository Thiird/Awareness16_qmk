#include "awareness16.h"
#include "drivers/issi/is31fl3733.h"


const is31_led g_is31_leds[DRIVER_LED_TOTAL] = 
{
    {0, K_1, J_1, L_1}, {0, K_2, J_2, L_2}, {0, K_3, J_3, L_3}, {0, K_4, J_4, L_4},
    {0, H_1, G_1, I_1}, {0, H_2, G_2, I_2}, {0, H_3, G_3, I_3}, {0, H_4, G_4, I_4},    
    {0, E_1, D_1, F_1}, {0, E_2, D_2, F_2}, {0, E_3, D_3, F_3}, {0, E_4, D_4, F_4},
    {0, B_1, A_1, C_1}, {0, B_2, A_2, C_2}, {0, B_3, A_3, C_3}, {0, B_4, A_4, C_4}
};

led_config_t g_led_config = { 
{// Key Matrix to LED Index
  {0, 1, 2, 3},
  {4, 5, 6, 7},
  {8, 9, 10, 11},
  {12, 13, 14, 15}
},
{// LED Index to Physical Position
{0,0}, {75,0}, {149,0}, {224,0},
{0,21},{75,21},{149,21},{224,21},
{0,43},{75,43},{149,43},{224,43},
{0,64},{75,64},{149,64},{224,64}
},
{// LED Index to Flag
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4
} };

/*void rgb_matrix_indicators_kb(void) {
    rgb_matrix_set_color(6, 255, 5, 5);
}*/
