# CMakeList.txt : CMake project for CatCutifier_RTD, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("CatCutifier")

# Add the cmake folder so the FindSphinx module is found
set (CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

add_subdirectory ("CatCutifier")
add_subdirectory ("docs")
