set(lib_name Main)

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_executable (${lib_name}  "main.c")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ${lib_name} PROPERTY CXX_STANDARD 20)
endif()

# TODO: Dodaj testy i zainstaluj elementy docelowe w razie potrzeby.
