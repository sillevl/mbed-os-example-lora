#include "rfm95.h"

static uint8_t radio_variant;

RFM95::RFM95(
                    PinName mosi,
                     PinName miso,
                     PinName sclk,
                     PinName nss,
                     PinName reset,
                     PinName dio0,
                     PinName dio1,
                     PinName dio2,
                     PinName dio3,
                     PinName dio4,
                     PinName dio5)
                     :
                     SX1276_LoRaRadio(mosi, miso, sclk, nss, reset, dio0, dio1, dio2, dio3, dio4, dio5)
                     {
                         
                     }


void RFM95::set_sx1276_variant_type()
{
    radio_variant = 1; //SX1276MB1LAS;
    // if(_ant_switch.is_connected()){
    //     _ant_switch.input();
    //     wait_ms(1);
    //     if (_ant_switch == 1) {
    //         radio_variant = SX1276MB1LAS;
    //     } else {
    //         radio_variant = SX1276MB1MAS;
    //     }
    //     _ant_switch.output();
    //     wait_ms(1);
    // } else {
    //     radio_variant = SX1276MB1LAS;
    // }
}