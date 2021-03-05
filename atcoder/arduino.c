#include <Adafruit_NeoPixel.h>

#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
#define PIN8 8

#define LED_NUM 72 //LEDの数

Adafruit_NeoPixel ledtape_1 = Adafruit_NeoPixel(LED_NUM, PIN1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel ledtape_2 = Adafruit_NeoPixel(LED_NUM, PIN2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel ledtape_3 = Adafruit_NeoPixel(LED_NUM, PIN3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel ledtape_4 = Adafruit_NeoPixel(LED_NUM, PIN4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel ledtape_5 = Adafruit_NeoPixel(LED_NUM, PIN5, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel ledtape_6 = Adafruit_NeoPixel(LED_NUM, PIN6, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel ledtape_7 = Adafruit_NeoPixel(LED_NUM, PIN7, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel ledtape_8 = Adafruit_NeoPixel(LED_NUM, PIN8, NEO_GRB + NEO_KHZ800);

void setup()
{
    ledtape_1.begin();
    ledtape_2.begin();
    ledtape_3.begin();
    ledtape_4.begin();
    ledtape_5.begin();
    ledtape_6.begin();
    ledtape_7.begin();
    ledtape_8.begin();

    ledtape_1.show();
    ledtape_2.show();
    ledtape_3.show();
    ledtape_4.show();
    ledtape_5.show();
    ledtape_6.show();
    ledtape_7.show();
    ledtape_8.show();
}

void loop()
{
    uint16_t i, j;
    for(j = 0; j < 256; j++)
    {
    for(i = 0; i < ledtape_1.numPixels(); i++)
    {
        ledtape_1.setPixelColor(i, rotateColor_1(
            ((i * 256 / ledtape_1.numPixels()) + j) & 255)
        );

        ledtape_2.setPixelColor(i, rotateColor_2(
            ((i * 256 / ledtape_2.numPixels()) + j) & 255)
        );

        ledtape_3.setPixelColor(i, rotateColor_3(
            ((i * 256 / ledtape_3.numPixels()) + j) & 255)
        );

        ledtape_4.setPixelColor(i, rotateColor_4(
            ((i * 256 / ledtape_4.numPixels()) + j) & 255)
        );

        ledtape_5.setPixelColor(i, rotateColor_5(
            ((i * 256 / ledtape_5.numPixels()) + j) & 255)
        );

        ledtape_6.setPixelColor(i, rotateColor_6(
            ((i * 256 / ledtape_6.numPixels()) + j) & 255)
        );

        ledtape_7.setPixelColor(i, rotateColor_7(
            ((i * 256 / ledtape_7.numPixels()) + j) & 255)
        );

        ledtape_8.setPixelColor(i, rotateColor_8(
            ((i * 256 / ledtape_8.numPixels()) + j) & 255)
        );
    }

    ledtape_1.show();
    ledtape_2.show();
    ledtape_3.show();
    ledtape_4.show();
    ledtape_5.show();
    ledtape_6.show();
    ledtape_7.show();
    ledtape_8.show();

    delay(20);
  }
}


//RGBの色の移り変わり関数
uint32_t rotateColor_1(byte WheelPos)
{
    if(WheelPos < 85)
    {
        return ledtape_1.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
    }
    else if(WheelPos < 170)
    {
    WheelPos -= 85;
    return ledtape_1.Color(255 - WheelPos * 3, 0, WheelPos * 3);
    }
    else
    {
    WheelPos -= 170;
    return ledtape_1.Color(0, WheelPos * 3, 255 - WheelPos * 3);
    }
}

uint32_t rotateColor_2(byte WheelPos)
{
    if(WheelPos < 85)
    {
    return ledtape_2.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
    }
    else if(WheelPos < 170)
    {
    WheelPos -= 85;
    return ledtape_2.Color(255 - WheelPos * 3, 0, WheelPos * 3);
    }
    else
    {
    WheelPos -= 170;
    return ledtape_2.Color(0, WheelPos * 3, 255 - WheelPos * 3);
    }
}

uint32_t rotateColor_3(byte WheelPos)
{
    if(WheelPos < 85)
    {
    return ledtape_3.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
    }
    else if(WheelPos < 170)
    {
    WheelPos -= 85;
    return ledtape_3.Color(255 - WheelPos * 3, 0, WheelPos * 3);
    }
    else
    {
    WheelPos -= 170;
    return ledtape_3.Color(0, WheelPos * 3, 255 - WheelPos * 3);
    }
}

uint32_t rotateColor_4(byte WheelPos)
{
    if(WheelPos < 85)
    {
    return ledtape_4.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
    }
    else if(WheelPos < 170)
    {
    WheelPos -= 85;
    return ledtape_4.Color(255 - WheelPos * 3, 0, WheelPos * 3);
    }
    else
    {
    WheelPos -= 170;
    return ledtape_4.Color(0, WheelPos * 3, 255 - WheelPos * 3);
    }
}

uint32_t rotateColor_5(byte WheelPos)
{
    if(WheelPos < 85)
    {
    return ledtape_5.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
    }
    else if(WheelPos < 170)
    {
    WheelPos -= 85;
    return ledtape_5.Color(255 - WheelPos * 3, 0, WheelPos * 3);
    }
    else
    {
    WheelPos -= 170;
    return ledtape_5.Color(0, WheelPos * 3, 255 - WheelPos * 3);
    }
}

uint32_t rotateColor_6(byte WheelPos)
{
    if(WheelPos < 85)
    {
    return ledtape_6.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
    }
    else if(WheelPos < 170)
    {
    WheelPos -= 85;
    return ledtape_6.Color(255 - WheelPos * 3, 0, WheelPos * 3);
    }
    else
    {
    WheelPos -= 170;
    return ledtape_6.Color(0, WheelPos * 3, 255 - WheelPos * 3);
    }
}

uint32_t rotateColor_7(byte WheelPos)
{
    if(WheelPos < 85)
    {
    return ledtape_7.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
    }
    else if(WheelPos < 170)
    {
    WheelPos -= 85;
    return ledtape_7.Color(255 - WheelPos * 3, 0, WheelPos * 3);
    }
    else
    {
    WheelPos -= 170;
    return ledtape_7.Color(0, WheelPos * 3, 255 - WheelPos * 3);
    }
}

uint32_t rotateColor_8(byte WheelPos)
{
    if(WheelPos < 85)
    {
    return ledtape_8.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
    }
    else if(WheelPos < 170)
    {
    WheelPos -= 85;
    return ledtape_8.Color(255 - WheelPos * 3, 0, WheelPos * 3);
    }
    else
    {
    WheelPos -= 170;
    return ledtape_8.Color(0, WheelPos * 3, 255 - WheelPos * 3);
    }
}
