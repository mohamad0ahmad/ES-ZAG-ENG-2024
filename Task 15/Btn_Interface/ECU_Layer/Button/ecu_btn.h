/* 
 * File:   ecu_btn.h
 * Author: Ideapad
 *
 * Created on April 28, 2024, 9:17 PM
 */

#ifndef ECU_BTN_H
#define	ECU_BTN_H

/* Section : Includes*/
#include "ecu_btn_cfg.h"
#include "../../MCAL_Layer/GPIO/hal_gpio.h"
/*Section : Macro Declarations*/

/*Section : Macro Functions*/

/*Section : Data Type Declarations*/
typedef enum{
    BUTTON_PRESSED,
    BUTTON_RELEASED
}button_state_t;

typedef enum{
    BUTTON_ACTIVE_HIGH,
    BUTTON_ACTIVE_LOW
}button_active_t;

typedef struct{
    pin_config_t button_pin;
    button_state_t button_state;
    button_active_t button_connection;

}button_t;
/*Section : Macro Declarations*/

/*Section : Function Declarations*/
Std_ReturnType button_initialize(const button_t *btn);
Std_ReturnType button_read_state(const button_t *btn,button_state_t *btn_state);



#endif	/* ECU_BTN_H */

