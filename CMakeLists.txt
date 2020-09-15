# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.1)
set (CMAKE_C_STANDARD 11)
set (CMAKE_CXX_STANDARD 11)
# 项目信息
project (Cute)
include_directories("${PROJECT_SOURCE_DIR}/engine/common")
include_directories("${PROJECT_SOURCE_DIR}/engine/interface")
add_subdirectory(engine)
