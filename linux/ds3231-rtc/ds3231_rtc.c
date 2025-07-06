#include "ds3231_rtc.h"

static int ds3231_probe(struct i2c_client *client, const struct i2c_device_id *id){

  return 0;
}

static int ds3231_remove(struct i2c_client *client){

  return 0;
}

static const struct i2c_device_id ds3231_i2c_device_id [] = {
  {"ds3231_rtc", 0},
  {}
};
MODULE_DEVICE_TABLE(i2c, ds3231_i2c_device_id);

static const struct of_device_id ds3231_match_table[] = {
  {.compatible = "ad,ds3231_rtc"},
  {}
};
MODULE_DEVICE_TABLE(of, ds3231_match_table);

static struct i2c_driver ds3231_driver = {
  .probe = ds3231_probe,
  .remove = ds3231_remove,
  .id_table = ds3231_i2c_device_id,
  .driver = {
    .name = "ds3231_driver",
    .of_match_table = ds3231_match_table,
  },

};
module_i2c_driver(ds3231_driver);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sanath SB");
