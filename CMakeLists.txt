cmake_minimum_required(VERSION 3.20.0)
project(ExpressWaybillOCR)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 变量和目录设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(Preprocess_DIR ${CMAKE_SOURCE_DIR}/src/preprocess)

# -----------------------------------------------------
# 3rdparty

# opencv
set(OpenCV_DIR "E:/opencv/opencv/build_vs")
find_package(OpenCV REQUIRED)


# -----------------------------------------------------
# 添加子目录
add_subdirectory(src)



# rm -rf build
# cmake -S . -B build -G "MinGW Makefiles"
# cmake --build build --verbose
# cd bin
# ./main.exe

