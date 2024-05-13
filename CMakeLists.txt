cmake_minimum_required(VERSION 3.20)
project(AutoVolumn)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
##########
# add all ui dirs to CMAKE_AUTOUIC_SEARCH_PATHS
file(GLOB_RECURSE QT_UI_FILES "${CMAKE_CURRENT_SOURCE_DIR}/GUI/UI/*.ui/")
foreach(QT_UI_FILE ${QT_UI_FILES})
    get_filename_component(QT_UI_DIR ${QT_UI_FILE} DIRECTORY)
    set(CMAKE_AUTOUIC_SEARCH_PATHS "${CMAKE_AUTOUIC_SEARCH_PATHS};${QT_UI_DIR}")
endforeach()
# set(CMAKE_AUTOUIC_SEARCH_PATHS "${CMAKE_CURRENT_SOURCE_DIR}/GUI/UI/SimpleWidget")
#########


################
set(ITK_DIR "D:/InsightToolkit-5.3.0/InsightToolkit-5.3.0/build")
find_package(ITK REQUIRED)
include(${ITK_USE_FILE})
################


find_package(Qt6 COMPONENTS Widgets REQUIRED)
file(GLOB_RECURSE CPP_SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/GUI/*.cpp/")
add_executable(${PROJECT_NAME} ${CPP_SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets ${ITK_LIBRARIES})

