#  
#  How to make:
#   cmake -S . -B build
#   cmake --build build
#   
# if ther is a target:
#   cmkae --build build --target whatever
# 
cmake_minimum_required(VERSION 3.12)

project (Template)

#set (Template_INCLUDE_DIRS "Include")

file (GLOB Template_SOURCES "Source/*.cpp")
file (GLOB Template_HEADERS "Include/*.hpp")
file (GLOB Template_DEMOS "Demo/*.cpp")


set ( CMAKE_INCLUDE_CURRENT_DIR ON )
include_directories ( Source Include )

add_library (Template SHARED ${Template_SOURCES} )
add_library (Templatedemo SHARED ${Template_DEMOS} )

add_executable (TemplateExe "Demo/main.cpp"  )
target_link_libraries ( TemplateExe PUBLIC Template Templatedemo )
