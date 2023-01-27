set(lib_name Container)

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_library (${lib_name}  "Container.h" "Container.c")

target_include_directories(${lib_name} PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(${lib_name} PUBLIC Element Insertion)
