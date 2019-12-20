#include <display_icons.h>
#include <included_main.h>

void Display_Round_Icon_40x40(const unsigned int icon[], unsigned int x0, unsigned int y0, unsigned int r)
{
	uint64_t k = 0;

    ILI9341_Draw_Circle(x0, y0, r, BLUE, 1);

	for(uint32_t j = y0 - 19; j < y0 + 21; j++)
	{
		for(uint32_t i = x0 -19; i < x0 + 21; i++)
		{
				ILI9341_Draw_Pixel(i, j, icon[k]);
				k++;
		}
	}
}

void Display_Logo_120x40(const unsigned int logo[])
{
	ILI9341_Fill_Screen(BLACK);

	ILI9341_Set_Rotation(3);

	uint64_t k = 0;

	for(uint32_t j = 99; j < 139; j++)
	{
		for(uint32_t i = 99; i < 219 ; i++)
		{
				ILI9341_Draw_Pixel(i, j, logo[k]);
				k++;
		}
	}
}

void Display_Square_Icon_40x40(const unsigned int icon[], unsigned int x0, unsigned int y0)
{
	uint64_t k = 0;

	for(uint32_t j = y0; j < y0 + 40; j++)
	{
		for(uint32_t i = x0; i < x0 + 40; i++)
		{
				ILI9341_Draw_Pixel(i, j, icon[k]);
				k++;
		}
	}
}
