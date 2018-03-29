#pragma once

#include "SX1276_LoRaRadio.h"


class RFM95: public SX1276_LoRaRadio {
    public: 
    RFM95(PinName mosi,
                     PinName miso,
                     PinName sclk,
                     PinName nss,
                     PinName reset,
                     PinName dio0,
                     PinName dio1,
                     PinName dio2 = NC,
                     PinName dio3 = NC,
                     PinName dio4 = NC,
                     PinName dio5 = NC);

    void set_sx1276_variant_type();
};




