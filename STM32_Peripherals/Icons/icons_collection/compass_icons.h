#include "stm32f4xx_hal.h"
#include "icons_config.h"

const unsigned int compass_icon_40x40[] = {
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,W,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,B,B,
		B,B,B,W,W,B,B,B,B,B,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,
		B,B,B,W,B,W,B,B,B,B,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,
		B,B,B,W,B,B,W,B,B,B,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,B,B,
		B,B,B,W,B,B,B,W,B,B,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,B,B,
		B,B,B,W,B,B,B,B,W,B,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,
		B,B,B,W,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,
		B,B,B,W,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,W,W,W,W,W,W,W,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,
		W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,W,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,W,B,B,
		B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,W,B,B,
		B,B,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,W,B,B,
		B,B,B,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,W,B,B,
		B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,B,B,W,W,B,B,W,B,B,
		B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,B,W,B,B,W,B,W,B,B,
		B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,W,W,B,B,
		B,B,W,W,W,W,W,W,W,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,W,B,B,B,B,B,B,W,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,
		B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,W,W,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,B,

};
