# 添加子目录
add_subdirectory(preprocess)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE 
    preprocess 
    ${OpenCV_LIBS}    
)
