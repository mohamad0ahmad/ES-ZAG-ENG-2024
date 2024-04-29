/* 
 * File:   application.c
 * Author: Mohamad
 *
 * Created on April 21, 2024, 5:23 AM
 */


#include "application.h"



pin_config_t led_1={
.port = PORTC_INDEX,
.pin =GPIO_PIN0,
.direction = GPIO_DIRECTION_OUTPUT,
.logic = GPIO_LOW
};

pin_config_t led_2={
.port = PORTC_INDEX,
.pin =GPIO_PIN1,
.direction = GPIO_DIRECTION_OUTPUT,
.logic = GPIO_LOW
};

pin_config_t led_3={
.port = PORTC_INDEX,
.pin =GPIO_PIN2,
.direction = GPIO_DIRECTION_OUTPUT,
.logic = GPIO_LOW
};


Std_ReturnType ret = E_NOT_OK;
int main() {
    application_initialize();
    while(1){
    ret = gpio_pin_write_logic(&led_1,GPIO_HIGH);
    ret = gpio_pin_write_logic(&led_2,GPIO_LOW);
    ret = gpio_pin_write_logic(&led_3,GPIO_LOW);
    __delay_ms(6000);
    
    ret = gpio_pin_write_logic(&led_1,GPIO_LOW);
    ret = gpio_pin_write_logic(&led_2,GPIO_HIGH);
    ret = gpio_pin_write_logic(&led_3,GPIO_LOW);
    __delay_ms(1000);
   
    ret = gpio_pin_write_logic(&led_1,GPIO_LOW);
    ret = gpio_pin_write_logic(&led_2,GPIO_LOW);
    ret = gpio_pin_write_logic(&led_3,GPIO_HIGH);
    __delay_ms(6000);
    
    }
    return (EXIT_SUCCESS);
}

void application_initialize(void){
 gpio_pin_direction_initialize(&led_1);
 gpio_pin_direction_initialize(&led_2);
 gpio_pin_direction_initialize(&led_3);
}

