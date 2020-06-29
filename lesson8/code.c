#include <Adafruit_NeoPixel.h>

#define PIN 2	 //设置Neopixel的输入引脚

#define NUMPIXELS      12 //带中的新像素数

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 100; //定时延迟（毫秒）

int redColor = 0;
int greenColor = 0;
int blueColor = 0;//定义RGB的初始值

void setup() {
  // 初始化Neopixel库
  pixels.begin();
}

void loop() {
  setColor();

  for (int i=0; i < NUMPIXELS; i++) {
    //像素颜色采用RGB值，从0,0,0到255,255,255
    pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor));

    // 将更新的像素颜色发送到硬件
    pixels.show();

    // 延迟一段时间（毫秒）
    delay(delayval);
  }
}

// 设置颜色
// 选择要为RGB设置的随机值
void setColor(){
  redColor = random(0, 255);
  greenColor = random(0,255);
  blueColor = random(0, 255);
}