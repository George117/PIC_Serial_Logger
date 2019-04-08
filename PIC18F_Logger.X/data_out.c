/*
 * File:   data_out.c
 * Author: georg
 *
 * Created on April 8, 2019, 7:15 PM
 */


#include <xc.h>
#include "data_out.h"

void send_data(void) {
    USARTWriteRaw(0x69);
}
