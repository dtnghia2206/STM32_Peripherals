/*
 * display.h
 *
 *  Created on: Jun 5, 2019
 *      Author: DNT2HC
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

/******************************************MENU SCREEN******************************************/
void Display_Menu(void);
/*****************************************IMAGE SCREEN******************************************/
void Display_Picture(void);
void Display_Color_Picture(void);
/******************************************TEXT SCREEN******************************************/
void Display_Text(void);
/*******************************************GPS SCREEN******************************************/
void Display_GPS(void);
void Display_Location(int x, int y, float latitude, float longitude);
/*****************************************MUSIC SCREEN******************************************/
void Display_Music(void);
/****************************************COMPASS SCREEN*****************************************/
void Display_Compass(void);
void Display_Accel(int16_t x, int16_t y, int16_t z, float degree);
#endif /* DISPLAY_H_ */
