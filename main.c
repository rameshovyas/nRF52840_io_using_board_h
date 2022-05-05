/*
  Author : Ramesh Vyas
  Board : nRF52840 DK
*/

#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "boards.h"

/**
 * @brief Function for application main entry.
 */
int main(void)
{
   bsp_board_init(BSP_INIT_LEDS); // Configured all of the LEDs as output pin
   while(true)
   {
     bsp_board_led_on(0); // Turn ON the first LED (total 4 LEDs 0-3)
     nrf_delay_ms(500); // Delay 500 ms
     bsp_board_led_off(0); // Turn OFF the first LED
     nrf_delay_ms(500);

     /* Using invert to toggle */

     bsp_board_led_invert(1);
     nrf_delay_ms(100);

     /*Blink all LEDS at once */

     bsp_board_leds_on();
     nrf_delay_ms(100);
     bsp_board_leds_off();
     nrf_delay_ms(100);
   }
}

/**
 *@}
 **/
