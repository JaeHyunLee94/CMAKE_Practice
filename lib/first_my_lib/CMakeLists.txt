project(FirstMyLib)


add_library(FirstMyLib STATIC src/FirstMyLib.cpp)
add_library(alias::FirstMyLib ALIAS FirstMyLib)
target_include_directories(FirstMyLib PUBLIC include)

