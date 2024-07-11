#IDF version is less than IDF5.0
if("${IDF_VERSION_MAJOR}.${IDF_VERSION_MINOR}" VERSION_LESS "5.0")
    set(SRC_VER "esp32_s3_korvo_2_idf4.c")
    set(REQ driver esp_lcd)
else()
    set(SRC_VER "esp32_s3_korvo_2_idf5.c")
    set(REQ driver esp_lcd esp_adc)
endif()

idf_component_register(
    SRCS "esp32_s3_korvo_2.c" ${SRC_VER}
    INCLUDE_DIRS "include" 
    "../../components/button/include"
    "../../components/esp_codec_dev/include"
    "../../components/esp_codec_dev/interface"
    "../../components/esp_codec_dev/device/include"
    "../../components/esp_jpeg/include"
    "../../components/esp_lvgl_port/include"
    "../../components/esp32-camera/driver/include"
    "../../components/esp32-camera/conversions/include"
    "../../components/esp32-camera/target/jpeg_include"
    "../../components/io_expander/esp_io_expander/include"
    "../../components/io_expander/esp_io_expander_tca9554/include"
    "../../components/lcd/esp_lcd_ili9341/include"
    "../../components/lcd_touch/esp_lcd_touch/include"
    "../../components/lcd_touch/esp_lcd_touch_tt21100/include"
    PRIV_INCLUDE_DIRS "priv_include"
    REQUIRES ${REQ}
    PRIV_REQUIRES spiffs fatfs
)
