#include<linux/module.h>

#define SECONDS     0x00
#define MINUTES     0x01
#define HOUR        0x02
#define DAY         0x03
#define DATE        0x04
#define MONTH       0x05
#define YEAR        0x06
#define ALARM1_SEC  0x07
#define TEMP_MSB    0x11
#define TEMP_LSB    0x12

struct ds3231_rtc{
    int reset_gpio;
    int intr_gpio;
    struct i2c_client *ds3231_rtc_i2c_client;
};
