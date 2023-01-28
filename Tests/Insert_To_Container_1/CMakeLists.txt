set(test_name Insert_To_Container_1)
set(file_name "Insert_To_Container_1.c")

add_executable(${test_name} ${file_name})

target_link_libraries(${test_name} PUBLIC Container)

add_test(${test_name} ${test_name})