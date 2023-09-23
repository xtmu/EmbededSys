# 设置项目名称
project(MyProject)

# 指定要求的最低 CMake 版本
cmake_minimum_required(VERSION 3.0)

# 添加可执行文件
# set(SRC_LIST main.c)
# set(SRC_LIST xfunc.cpp 05-pointerarr.cpp)
set(SRC_LIST algorithm.cpp 05-arrpointer.cpp)
add_executable(myapp ${SRC_LIST})

# set(SRC_LIST2 xfunc.cpp 05-pointerarr.cpp)
# add_executable(myapp2 ${SRC_LIST2})

# 添加其他源文件和头文件
# 如果有多个源文件，可以列出所有的 .cpp 文件
# 如果有多个目录，可以使用 add_subdirectory() 来管理子目录的 CMakeLists.txt 文件
# include_directories() 可以用于包含头文件目录
# target_link_libraries() 可以用于链接外部库

# 设置编译选项（可选）
# 例如，启用 C++11 标准
# target_compile_features(myapp PRIVATE cxx_std_11)

