cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(dcgan)

find_package(Torch REQUIRED)

add_executable(dcgan dcgan.cpp)
target_link_libraries(dcgan "${TORCH_LIBRARIES}")
message(STATUS "${TORCH_LIBRARIES}")
message(STATUS "${TORCH_LIBRARY}")
set_property(TARGET dcgan PROPERTY CXX_STANDARD 14)
