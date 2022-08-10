


add_executable(app main.cpp)
target_link_libraries(app FirstMyLib)
#target_link_libraries(app alias::FirstMyLib) #you can use alias as well.
#target_include_directories(app PRIVATE ${CMAKE_SOURCE_DIR}/lib/first_my_lib/include) #CMNAKE_SOURCE_DIR is the directory where the top level cmake script is located
target_include_directories(app PRIVATE FirstMyLib)