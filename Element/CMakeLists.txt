set(lib_name Element)

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_library (${lib_name}  "Element.h" "Element.c")

target_include_directories(${lib_name} PUBLIC ${CMAKE_CURRENT_LIST_DIR})
# TODO: Dodaj testy i zainstaluj elementy docelowe w razie potrzeby.
