cmake_minimum_required(VERSION 3.12)

project (Template)

file (GLOB Template_SOURCES "Source/*.cpp")
file (GLOB Template_HEADERS "Include/*.hpp")
file (GLOB Template_DEMOS "Demo/*.cpp")

set (Template_INCLUDE_DIRS "Include")

add_executable(TemplateExe "Demo/main.cpp" ${Template_SOURCES})
target_include_directories(TemplateExe PRIVATE ${Template_INCLUDE_DIRS})

