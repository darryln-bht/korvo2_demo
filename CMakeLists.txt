cmake_minimum_required(VERSION 3.5)

set(COMPONENTS main) # Include the minimal set of components; main and anything it depends on.

#set(EXTRA_COMPONENT_DIRS ./bsp)
#set(COMPONENT_DIRS $ENV{IDF_PATH}/components;./bsp;./components})
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(korvo2_demo)
spiffs_create_partition_image(storage spiffs FLASH_IN_PROJECT)
