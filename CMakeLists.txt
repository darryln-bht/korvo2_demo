cmake_minimum_required(VERSION 3.5)
set(COMPONENTS main) # Include the minimal set of components; main and anything it depends on.
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(korvo2_demo)
spiffs_create_partition_image(storage spiffs FLASH_IN_PROJECT)
