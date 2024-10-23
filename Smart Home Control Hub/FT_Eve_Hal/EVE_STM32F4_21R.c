/**
 * This source code ("the Software") is provided by Bridgetek Pte Ltd
 * ("Bridgetek") subject to the licence terms set out
 *   http://brtchip.com/BRTSourceCodeLicenseAgreement/ ("the Licence Terms").
 * You must read the Licence Terms before downloading or using the Software.
 * By installing or using the Software you agree to the Licence Terms. If you
 * do not agree to the Licence Terms then do not download or use the Software.
 *
 * Without prejudice to the Licence Terms, here is a summary of some of the key
 * terms of the Licence Terms (and in the event of any conflict between this
 * summary and the Licence Terms then the text of the Licence Terms will
 * prevail).
 *
 * The Software is provided "as is".
 * There are no warranties (or similar) in relation to the quality of the
 * Software. You use it at your own risk.
 * The Software should not be used in, or for, any medical device, system or
 * appliance. There are exclusions of Bridgetek liability for certain types of loss
 * such as: special loss or damage; incidental loss or damage; indirect or
 * consequential loss or damage; loss of income; loss of business; loss of
 * profits; loss of revenue; loss of contracts; business interruption; loss of
 * the use of money or anticipated savings; loss of information; loss of
 * opportunity; loss of goodwill or reputation; and/or loss of, damage to or
 * corruption of data.
 * There is a monetary cap on Bridgetek's liability.
 * The Software may have subsequently been amended by another user and then
 * distributed by that other user ("Adapted Software").  If so that user may
 * have additional licence terms that apply to those amendments. However, Bridgetek
 * has no liability in relation to those amendments.
 *
 * Abstract: ILI9488 driver source
 *
 */

#include "EVE_Platform.h"

#if (defined(STM32_PLATFORM) && defined(ENABLE_STM32F4_21R))

extern SPI_HandleTypeDef hspi2;
extern SPI_HandleTypeDef hspi3;

static int16_t encoder = 0; // save the encoder change for polling
static int16_t button = 0; // save button change for polling

/********************************* LCD related *************************************/
void send_data(uint8_t data, bool cmd)
{
	uint16_t trans = 0;

	HAL_GPIO_WritePin(LCD_CS_GPIO_Port, LCD_CS_Pin, GPIO_PIN_RESET);
	if (cmd)
		trans = data << 7;
	else
		trans = 0x8000 | data << 7;
	HAL_SPI_Transmit(&hspi3, &trans, 1, HAL_MAX_DELAY);// 9 data bits
	HAL_GPIO_WritePin(LCD_CS_GPIO_Port, LCD_CS_Pin, GPIO_PIN_SET);
}

void spi_write(uint8_t* data, uint32_t length)
{
	//send command
	send_data(data[0], true);

	if (length > 1)
	{
		for (int i = 1; i < length; i++)
			send_data(data[i], false);
	}
}

void LCD_init()
{
	uint8_t data1[6] = { 0xFF, 0x77, 0x01, 0x00, 0x00, 0x10 };
	uint8_t data2[3] = { 0xC0, 0x3B, 0x00 };
	uint8_t data3[3] = { 0xC1, 0x0B, 0x02 };
	uint8_t data4[3] = { 0xC2, 0x07, 0x02 };
	uint8_t data5[2] = { 0xCC, 0x10 };
	uint8_t data6[17] = { 0xB0, 0x00, 0x11, 0x16, 0x0E, 0x11, 0x06, 0x05, 0x09, 0x08, 0x21, 0x06, 0x13, 0x10, 0x29, 0x31, 0x18 };
	uint8_t data7[17] = { 0xB1, 0x00, 0x11, 0x16, 0x0E, 0x11, 0x07, 0x05, 0x09, 0x09, 0x21, 0x05, 0x13, 0x11, 0x2A, 0x31, 0x18 };
	uint8_t data8[6] = { 0xFF, 0x77, 0x01, 0x00, 0x00, 0x11 };
	uint8_t data9[2] = { 0xB0, 0x6D };
	uint8_t data10[2] = { 0xB1, 0x37 };
	uint8_t data11[2] = { 0xB2, 0x81 };
	uint8_t data12[2] = { 0xB3, 0x80 };
	uint8_t data13[2] = { 0xB5, 0x43 };
	uint8_t data14[2] = { 0xB7, 0x85 };
	uint8_t data15[2] = { 0xB8, 0x20 };
	uint8_t data16[2] = { 0xC1, 0x78 };
	uint8_t data17[2] = { 0xC2, 0x78 };
	uint8_t data18[2] = { 0xD0, 0x88 };
	uint8_t data19[4] = { 0xE0, 0x00, 0x00, 0x02 };
	uint8_t data20[6] = { 0xE1, 0x03, 0xA0, 0x00, 0x00, 0x04 };
	uint8_t data21[14] = { 0xE2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
	uint8_t data22[5] = { 0xE3, 0x00, 0x00, 0x11, 0x00 };
	uint8_t data23[3] = { 0xE4, 0x22, 0x00 };
	uint8_t data24[17] = { 0xE5, 0x05, 0xEC, 0xA0, 0xA0, 0x07, 0xEE, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
	uint8_t data25[5] = { 0xE6, 0x00, 0x00, 0x11, 0x00 };
	uint8_t data26[3] = { 0xE7, 0x22, 0x00 };
	uint8_t data27[17] = { 0xE8, 0x06, 0xED, 0xA0, 0xA0, 0x08, 0xEF, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
	uint8_t data28[8] = { 0xEB, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00 };
	uint8_t data29[17] = { 0xED, 0xFF, 0xFF, 0xFF, 0xBA, 0x0A, 0xBF, 0x45, 0xFF, 0xFF, 0x54, 0xFB, 0xA0, 0xAB, 0xFF, 0xFF, 0xFF };
	uint8_t data30[7] = { 0xEF, 0x10, 0x0D, 0x04, 0x08, 0x3F, 0x1F };
	uint8_t data31[6] = { 0xFF, 0x77, 0x01, 0x00, 0x00, 0x13 };
	uint8_t data32[2] = { 0xEF, 0x08 };
	uint8_t data33[6] = { 0xFF, 0x77, 0x01, 0x00, 0x00, 0x00 };
	uint8_t data34[2] = { 0x36, 0x08 };
	uint8_t data35[2] = { 0x3A, 0x66 };
	uint8_t data36 = 0x11;
	uint8_t data37 = 0x29;

	spi_write(data1, sizeof(data1));
	spi_write(data2, sizeof(data2));
	spi_write(data3, sizeof(data3));
	spi_write(data4, sizeof(data4));
	spi_write(data5, sizeof(data5));
	spi_write(data6, sizeof(data6));
	spi_write(data7, sizeof(data7));
	spi_write(data8, sizeof(data8));
	spi_write(data9, sizeof(data9));
	spi_write(data10, sizeof(data10));
	spi_write(data11, sizeof(data11));
	spi_write(data12, sizeof(data12));
	spi_write(data13, sizeof(data13));
	spi_write(data14, sizeof(data14));
	spi_write(data15, sizeof(data15));
	spi_write(data16, sizeof(data16));
	spi_write(data17, sizeof(data17));
	spi_write(data18, sizeof(data18));
	spi_write(data19, sizeof(data19));
	spi_write(data20, sizeof(data20));
	spi_write(data21, sizeof(data21));
	spi_write(data22, sizeof(data22));
	spi_write(data23, sizeof(data23));
	spi_write(data24, sizeof(data24));
	spi_write(data25, sizeof(data25));
	spi_write(data26, sizeof(data26));
	spi_write(data27, sizeof(data27));
	spi_write(data28, sizeof(data28));
	spi_write(data29, sizeof(data29));
	spi_write(data30, sizeof(data30));
	spi_write(data31, sizeof(data31));
	spi_write(data32, sizeof(data32));
	spi_write(data33, sizeof(data33));
	spi_write(data34, sizeof(data34));
	spi_write(data35, sizeof(data35));
	EVE_sleep(100);
	spi_write(&data36, 1);
	EVE_sleep(100);
	spi_write(&data37, 1);

}

/********************************* encoder related *************************************/
// A___     ______
//    |_____|    |____
// B_____     ______
//      |_____|    |__
//  3  2 [0] 1 3  2 [0]  (B<<1|A)
// [0] is the positions where rotary switch detect
// ==> right, count up
// <== left,  count down
static int8_t prev_state;

void check_position(void)
{
	int level_A = HAL_GPIO_ReadPin(ENCODER_A_GPIO_Port, ENCODER_A_Pin);
	int level_B = HAL_GPIO_ReadPin(ENCODER_B_GPIO_Port, ENCODER_B_Pin);
	int8_t state = level_A | (level_B << 1);
	//printf("level A %d, B %d\n", level_A, level_B);

	if (prev_state != state)
	{
	    if ((prev_state == 2) && (state == 0)) {
		    encoder++;
		    printf("right\n");
	    }
	    else if ((prev_state == 1) && (state == 0)) {
		    encoder--;
		    printf("left\n");
    	}
	    else {
	    }
		//printf("prev state %d, state %d\n", prev_state, state);
		prev_state = state;
	}
}

void encoder_read(int* data)
{
	static int16_t prev = 0; // save the value from last polling

	if (encoder != prev)
	{
		if (encoder > prev)
			*data = 1;
		else
			*data = -1;
		prev = encoder;
	}
	else
		*data = 0;
}

void encoder_init()
{
	int level_A = HAL_GPIO_ReadPin(ENCODER_A_GPIO_Port, ENCODER_A_Pin);
	int level_B = HAL_GPIO_ReadPin(ENCODER_B_GPIO_Port, ENCODER_B_Pin);
	prev_state = level_A | (level_B << 1);
}

/********************************* button related *************************************/
void button_read(int* data)
{
	static int16_t prev = 0; // save the value from last polling

	if (button != prev)
	{
		*data = 2;
		prev = button;
	}
}

void button_init()
{

}

/********************************* flash related *************************************/
#define flash_WriteEnable 0x06
#define flash_WriteDisable 0x04
#define flash_ReadStatusReg 0x05
#define flash_WriteStatusReg 0x01
#define flash_ReadData 0x03
#define flash_FastReadData 0x0B
#define flash_FastReadQuad 0x6B
#define flash_PageProgram 0x02
#define flash_64BlockErase 0xD8
#define flash_SectorErase 0x20
#define flash_ChipErase 0xC7
#define flash_Powerdown 0xB9
#define flash_ReleasePowerDown 0xAB
#define flash_DeviceID 0xAB
#define flash_ManufactDeviceID 0x90
#define flash_JedecDeviceID 0x9F

#define FLASH_CS_ACTIVE()        { HAL_GPIO_WritePin(FLASH_CS_GPIO_Port, FLASH_CS_Pin, GPIO_PIN_RESET);}
#define FLASH_CS_DEACTIVE()      { HAL_GPIO_WritePin(FLASH_CS_GPIO_Port, FLASH_CS_Pin, GPIO_PIN_SET);}

uint16_t flash_readID()
{
	HAL_StatusTypeDef ret = HAL_TIMEOUT;
	uint8_t txdata[4];
	uint8_t rxdata[2];
	FLASH_CS_ACTIVE();

	txdata[0] = flash_ManufactDeviceID;
	txdata[1] = 0;
	txdata[2] = 0;
	txdata[3] = 0;
	ret = HAL_SPI_Transmit(&hspi2, txdata, sizeof(txdata), HAL_MAX_DELAY);

	ret = HAL_SPI_Receive(&hspi2, rxdata, sizeof(rxdata), HAL_MAX_DELAY);
	FLASH_CS_DEACTIVE();
	return (rxdata[0] << 8 | rxdata[1]);
}

void flash_init()
{
	eve_printf_debug("flash ID 0x%04x\n",flash_readID());
}

/*************************** GPIO event process (encoder & button) *******************************/
void HAL_GPIO_EXTI_Callback(uint16_t gpio)
{
	static int prev_level_A = 0;
	int level_A, level_B, level_btn;
	static int prev_level_btn = 1;

	if ((gpio == ENCODER_A_Pin) || (gpio == ENCODER_B_Pin))
	{
		//printf("gpio %d\n", gpio);
		HAL_Delay(2);
		check_position();
	}
	else if (gpio == BUTTON_Pin)
	{
	    level_btn = HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin);
		if ((level_btn == 1) && (prev_level_btn == 0))
		{
			button--;
			eve_printf_debug("release\n");
			printf("release\n");
		}
		else if ((level_btn == 0) && (prev_level_btn == 1))
		{
			//button++;
			eve_printf_debug("press\n");
			printf("press\n");
		}
		else
		{
			//button = 0;
			eve_printf_debug("no action\n");
		}
		prev_level_btn = level_btn;
	}
}

void EVE_STM34F4_21R_STM34F4_bootup()
{
	LCD_init();
	encoder_init();
	button_init();
	flash_init();
}

#endif

/*end of file*/
