cmake_minimum_required(VERSION 3.17)
project(CS131_CPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(assignments)

add_executable(CS131_CPP
        assignments/multiplier/multiplier.cpp
        assignments/updateProfile/CS131_Canvas_Notification_Updates.PNG
        assignments/updateProfile/CS131_Canvas_Profile_Updates.PNG
        assignments/updateProfile/updateProfile.md)
