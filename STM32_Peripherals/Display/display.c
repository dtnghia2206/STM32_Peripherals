/*
 * display.c
 *
 *  Created on: Jun 5, 2019
 *      Author: DNT2HC
 */

#include "icons_included.h"
#include "included_main.h"
#include "ironman.h"
#include "map.h"

/******************************************MENU SCREEN******************************************/
void Display_Menu()
{

	ILI9341_Set_Rotation(3);

	/* Refresh the screen to black background */
	ILI9341_Fill_Screen(BLACK);
	HAL_Delay(500);

	/* Counting through all the bytes of those icons */
	uint64_t k = 0;
	/* Draw border for the menu */
    ILI9341_Draw_Empty_Rectangle(YELLOW, 10, 30, 310, 230);

    /* Write something */
	ILI9341_Draw_String(10,10,WHITE,BLACK,"Welcome!",2);

	/* Battery Icon in the top right corner */
    for(uint32_t j = 10; j < 20; j++)
    {
    	for(uint32_t i = 280; i < 300; i++)
    	{
				ILI9341_Draw_Pixel(i, j, battery_icon[k]);
				k++;
		}
	}

    /* =================================List of Icons================================= */

    /* ===========================Icon No.1=========================== */
    Display_Round_Icon_40x40(home_icon_40x40, 59, 79, 40);

    /* ===========================Icon No.2=========================== */
    Display_Round_Icon_40x40(music_icon_40x40, 159, 79, 40);

    /* ===========================Icon No.3=========================== */
    Display_Round_Icon_40x40(note_icon_40x40, 259, 79, 40);

    /* ===========================Icon No.4=========================== */
    Display_Round_Icon_40x40(compass_icon_40x40, 59, 179, 40);

    /* ===========================Icon No.5=========================== */
    Display_Round_Icon_40x40(gps_icon_40x40, 159, 179, 40);

    /* ===========================Icon No.6=========================== */
    Display_Round_Icon_40x40(image_icon_40x40, 259, 179, 40);

	CS_OFF;
}

/*****************************************IMAGE SCREEN******************************************/
void Display_Picture()
{
	ILI9341_SPI_Send_Image(&ironman_320x240);

	Display_Square_Icon_40x40(back_icon_40x40, 0, 200);
}

void Display_Color_Picture()
{
	for (uint16_t i = 0; i < 280; i++)
	{
		for (uint16_t j = 0; j < 320; j++)
		{
			ILI9341_Draw_Double_Pixel(j, i, ironman_320x240[(640 * i) + j * 2], ironman_320x240[(640 * i) + j * 2 + 1]);
		}
	}

	Display_Square_Icon_40x40(back_icon_40x40, 0, 200);
}

/******************************************TEXT SCREEN******************************************/
void Display_Text()
{
	/* Refresh the screen to black background */
	ILI9341_Fill_Screen(BLACK);
	HAL_Delay(500);

	/* Draw border for the menu */
    ILI9341_Draw_Empty_Rectangle(YELLOW, 10, 30, 310, 230);

    /* Write something */
	ILI9341_Draw_String(20, 40, WHITE, BLACK, "Hello User!", 2);

	ILI9341_Draw_String(20, 60, WHITE, BLACK, "This is the test for TFT LCD!", 2);

	ILI9341_Draw_String(20, 80, WHITE, BLACK, "For more information, please visit:", 2);

	ILI9341_Draw_String(20, 100, WHITE, BLACK, "    aweirdolife.wordpress.com    ", 2);

	Display_Square_Icon_40x40(back_icon_40x40, 0, 200);
}

/*******************************************GPS SCREEN******************************************/
void Display_GPS()
{
	ILI9341_Set_Rotation(0);
	/* Drawing Map to the LCD */
	uint64_t k = 0;
	for(uint32_t i = 0; i < 240; i++)
	{
		for(uint32_t j = 320; j > 0; j--)
		{
			ILI9341_Draw_Pixel(i, j, worldmap[k]);
			k++;
		}
	}

	ILI9341_Set_Rotation(3);
	ILI9341_Draw_Filled_Rectangle(BLACK, 5, 205, 315, 235);
}

void Display_Location(int x, int y, float latitude, float longitude)
{
	ILI9341_Set_Rotation(3);

	char display_location[100];

	sprintf(display_location,"latitude   %f",latitude);
	ILI9341_Draw_String(7, 210, BLUE, BLACK, display_location, 1);

	sprintf(display_location,"longitude  %f",longitude);
	ILI9341_Draw_String(7, 225, BLUE, BLACK, display_location, 1);

	ILI9341_Draw_Line(YELLOW, x, 8, x, 202);
	ILI9341_Draw_Line(YELLOW, 8, y, 310, y);
}

/*****************************************MUSIC SCREEN******************************************/
void Display_Music()
{
	ILI9341_Set_Rotation(3);

	/* Refresh the screen to black background */
	ILI9341_Fill_Screen(BLACK);

	/* Draw border for the compass screen */
    ILI9341_Draw_Empty_Rectangle(YELLOW, 10, 30, 310, 230);

    Display_Round_Icon_40x40(music_icon_40x40, 159, 79, 40);

    Display_Square_Icon_40x40(back_icon_40x40, 0, 200);
}

/****************************************COMPASS SCREEN*****************************************/
void Display_Compass()
{
	ILI9341_Set_Rotation(3);

	/* Refresh the screen to black background */
	ILI9341_Fill_Screen(BLACK);

	/* Draw border for the compass screen */
    ILI9341_Draw_Empty_Rectangle(YELLOW, 10, 30, 310, 230);

    Display_Square_Icon_40x40(back_icon_40x40, 0, 200);
}

void Display_Accel(int16_t x, int16_t y, int16_t z, float degree)
{
	char display_accel[100];

	ILI9341_Draw_String(100, 50, BLUE, BLACK, "display acceleration data", 1);

	sprintf(display_accel, "x axis   %d", x);
	ILI9341_Draw_String(50, 100, BLUE, BLACK, display_accel, 1);

	sprintf(display_accel, "y axis   %d", y);
	ILI9341_Draw_String(50, 120, BLUE, BLACK, display_accel, 1);

	sprintf(display_accel, "z axis   %d", z);
	ILI9341_Draw_String(50, 140, BLUE, BLACK, display_accel, 1);

	ILI9341_Draw_String(100, 180, BLUE, BLACK, "display degree angle", 1);

	sprintf(display_accel, "degree  %f", degree);
	ILI9341_Draw_String(50, 200, BLUE, BLACK, display_accel, 1);
}
