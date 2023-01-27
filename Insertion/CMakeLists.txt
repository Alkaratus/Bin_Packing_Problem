set(lib_name Insertion)

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_library (${lib_name}  "Insertion.h" "Insertion.c")

target_include_directories(${lib_name} PUBLIC ${CMAKE_CURRENT_LIST_DIR})
