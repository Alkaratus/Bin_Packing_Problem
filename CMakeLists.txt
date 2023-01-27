# CMakeList.txt: plik projektu CMake najwyższego poziomu, wykonaj konfigurację globalną
# i uwzględnij podprojekty w tym miejscu.
#
cmake_minimum_required (VERSION 3.8)

project ("Bin_Packing_Problem")

# Uwzględnij podprojekty.
add_subdirectory ("Main")
add_subdirectory("Element") 
add_subdirectory("Container")
add_subdirectory("Insertion")