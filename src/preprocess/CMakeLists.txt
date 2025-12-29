add_library(preprocess SHARED preprocess.cpp)

target_include_directories(preprocess PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# OpenCV
target_include_directories(preprocess PUBLIC ${OpenCV_INCLUDE_DIRS})
target_link_libraries(preprocess PUBLIC ${OpenCV_LIBS})