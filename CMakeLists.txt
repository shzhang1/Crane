cmake_minimum_required(VERSION 3.5)
project(Crane)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    Bolt.cpp
    Bolt.h
    BoltAddElement.cpp
    BoltAddElement.h
    BoltCountConnections.cpp
    BoltCountConnections.h
    BoltCountHtml.cpp
    BoltCountHtml.h
    BoltCountJpeg.cpp
    BoltCountJpeg.h
    BoltFilterFemale.cpp
    BoltFilterFemale.h
    BoltFilterGif.cpp
    BoltFilterGif.h
    BoltFilterMale.cpp
    BoltFilterMale.h
    BoltGender.cpp
    BoltGender.h
    BoltRankBytes.cpp
    BoltRankBytes.h
    BoltRankHtml.cpp
    BoltRankHtml.h
    BoltRankProtocol.cpp
    BoltRankProtocol.h
    BoltSplitGender.cpp
    BoltSplitGender.h
    BoltSumBytes.cpp
    BoltSumBytes.h
    Chrono.cpp
    Chrono.h
    ChronoCpu.cpp
    ChronoCpu.h
    connections.cpp
    connections.h
    constant.h
    Crane.cpp
    Crane.h
    crane_types.h
    FileSystem.cpp
    FileSystem.h
    main.cpp
    Membership.cpp
    Membership.h
    Spout.cpp
    Spout.h
    SpoutCalgary.cpp
    SpoutCalgary.h
    SpoutLawrence.cpp
    SpoutLawrence.h
    SpoutTwits.cpp
    SpoutTwits.h
    Supervisor.cpp
    Supervisor.h
    Tuple.cpp
    Tuple.h)

add_executable(Crane ${SOURCE_FILES})