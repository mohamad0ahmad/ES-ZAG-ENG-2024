/* 
 * File:   application.c
 * Author: Mohamad
 *
 * Created on April 21, 2024, 5:23 AM
 */


#include "application.h"



led_t led1 = {
.port_name =PORTC_INDEX,
.pin = GPIO_PIN0,
.led_status = GPIO_LOW
};
led_t led2 = {
.port_name =PORTC_INDEX,
.pin = GPIO_PIN1,
.led_status = GPIO_LOW
};

led_t led3 = {
.port_name =PORTC_INDEX,
.pin = GPIO_PIN2,
.led_status = GPIO_LOW
};
led_t led4 = {
.port_name =PORTC_INDEX,
.pin = GPIO_PIN3,
.led_status = GPIO_LOW
};
led_t led5 = {
.port_name =PORTC_INDEX,
.pin = GPIO_PIN4,
.led_status = GPIO_LOW
};
led_t led6 = {
.port_name =PORTC_INDEX,
.pin = GPIO_PIN5,
.led_status = GPIO_LOW
};
led_t led7 = {
.port_name =PORTC_INDEX,
.pin = GPIO_PIN6,
.led_status = GPIO_LOW
};
led_t led8 = {
.port_name =PORTC_INDEX,
.pin = GPIO_PIN7,
.led_status = GPIO_LOW
};

button_t btn_high ={
    .button_pin.port = PORTD_INDEX,
    .button_pin.pin = GPIO_PIN0,
    .button_pin.direction = GPIO_DIRECTION_INPUT,
    .button_pin.logic = GPIO_LOW,
    .button_connection =BUTTON_ACTIVE_HIGH,
    .button_state =BUTTON_RELEASED
};


void Program_1(void);
void Program_2(void);
void Program_3(void);
void Program_4(void);



button_state_t btn_high_status = BUTTON_RELEASED;
Std_ReturnType ret = E_NOT_OK;
button_state_t btn_high_valid_status = BUTTON_RELEASED;
button_state_t btn_high_last_valid_status = BUTTON_RELEASED;
uint32 btn_high_valid =0;
uint8 Programe_Selected =0;
int main() {
    application_initialize();
    
    while(1){
        ret = button_read_state(&btn_high,&btn_high_status);
        
        
        if(btn_high_status == BUTTON_PRESSED){
            btn_high_valid++;
            if(btn_high_valid >100){
                btn_high_valid_status =BUTTON_PRESSED;
            }
            
        }else{
            btn_high_valid = 0;
            btn_high_valid_status = BUTTON_RELEASED;
            
            
        }
        if(btn_high_valid_status != btn_high_last_valid_status){
            btn_high_last_valid_status = btn_high_valid_status;
            if(BUTTON_PRESSED == btn_high_valid_status){
                
                if(4 == Programe_Selected){
                 Programe_Selected = 0 ;
                }
                Programe_Selected++;
                switch(Programe_Selected){
                    case 1 : Program_1();
                        break;
                    case 2: Program_2();
                        break;
                    case 3: Program_3();
                        break;
                    case 4 : Program_4();
                        break;
                    }
                
            }
        }
        
        
    }
    return (EXIT_SUCCESS);
}

void application_initialize(void){
    Std_ReturnType ret =E_NOT_OK;
    
    ret = led_initialize(&led1);
    ret = led_initialize(&led2);
    ret = led_initialize(&led3);
    ret = led_initialize(&led4);
    ret = led_initialize(&led5);
    ret = led_initialize(&led6);
    ret = led_initialize(&led7);
    ret = led_initialize(&led8);
    
    ret = button_initialize(&btn_high);
}

void Program_1(void){
    
    ret = led_turn_on(&led1);
    ret = led_turn_on(&led2);
    ret = led_turn_on(&led3);
    ret = led_turn_on(&led4);
    ret = led_turn_on(&led5);
    ret = led_turn_on(&led6);
    ret = led_turn_on(&led7);
    ret = led_turn_on(&led8);
    __delay_ms(500);
    ret = led_turn_off(&led1);
    ret = led_turn_off(&led2);
    ret = led_turn_off(&led3);
    ret = led_turn_off(&led4);
    ret = led_turn_off(&led5);
    ret = led_turn_off(&led6);
    ret = led_turn_off(&led7);
    ret = led_turn_off(&led8);
    __delay_ms(500);
    
    
}


void Program_2(void){
    led_turn_toggle(&led1);
    __delay_ms(250);
    led_turn_toggle(&led1);
    
    led_turn_toggle(&led2);
    __delay_ms(250);
    led_turn_toggle(&led2);
    
    led_turn_toggle(&led3);
    __delay_ms(250);
    led_turn_toggle(&led3);
    
    led_turn_toggle(&led4);
    __delay_ms(250);
    led_turn_toggle(&led4);
    
    led_turn_toggle(&led5);
    __delay_ms(250);
    led_turn_toggle(&led5);
    
    led_turn_toggle(&led6);
    __delay_ms(250);
    led_turn_toggle(&led6);
    
    led_turn_toggle(&led7);
    __delay_ms(250);
    led_turn_toggle(&led7);
    
    led_turn_toggle(&led8);
    __delay_ms(250);
    led_turn_toggle(&led8);
    

}


void Program_3(void){
    
    led_turn_toggle(&led8);
    __delay_ms(250);
    led_turn_toggle(&led8);
    
    led_turn_toggle(&led7);
    __delay_ms(250);
    led_turn_toggle(&led7);
    
    led_turn_toggle(&led6);
    __delay_ms(250);
    led_turn_toggle(&led6);
    
    led_turn_toggle(&led5);
    __delay_ms(250);
    led_turn_toggle(&led5);
    
    led_turn_toggle(&led4);
    __delay_ms(250);
    led_turn_toggle(&led4);
    
    led_turn_toggle(&led3);
    __delay_ms(250);
    led_turn_toggle(&led3);
   
    led_turn_toggle(&led2);
    __delay_ms(250);
    led_turn_toggle(&led2);
    
    led_turn_toggle(&led1);
    __delay_ms(250);
    led_turn_toggle(&led1);

}

void Program_4(void){
    led_turn_toggle(&led1);
    led_turn_toggle(&led8);
    __delay_ms(300);
    
    
    led_turn_toggle(&led2);
    led_turn_toggle(&led7);
    __delay_ms(300);
    
    
    led_turn_toggle(&led6);
    led_turn_toggle(&led3);
    __delay_ms(300);
    
    
    led_turn_toggle(&led4);
    led_turn_toggle(&led5);
    __delay_ms(300);
    
    
    led_turn_toggle(&led4);
    led_turn_toggle(&led5);
    led_turn_toggle(&led6);
    led_turn_toggle(&led3);
    led_turn_toggle(&led2);
    led_turn_toggle(&led7);
    led_turn_toggle(&led8);
    led_turn_toggle(&led1);
}

