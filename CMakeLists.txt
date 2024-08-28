cmake_minimum_required(VERSION 3.7)
set(PROJECT_NAME sfml_project)

project(${PROJECT_NAME})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -static")

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp States.cpp States.h StateEnum.h SFML_MazeGame/Circle.cpp SFML_MazeGame/Circle.h FontEnum.h Font.cpp Font.h SFML_MazeGame/Position.cpp SFML_MazeGame/Position.h MouseEvents.cpp MouseEvents.h Helper.cpp Helper.h SFML_MazeGame/Texture.cpp SFML_MazeGame/Texture.h SFML_MazeGame/TextureEnum.h SFML_MazeGame/AnimatedSprite.cpp SFML_MazeGame/AnimatedSprite.h ListItem.cpp ListItem.h List.cpp List.h Menu.cpp Menu.h ../../Downloads/CollisionImage.h SFML_MazeGame/CollisionImage.cpp SFML_MazeGame/CollisionImage.h SFML_MazeGame/Background.cpp SFML_MazeGame/Background.h SFML_MazeGame/BackgroundEnum.h SFML_MazeGame/Moving.cpp SFML_MazeGame/Moving.h SFML_MazeGame/StartEnd.cpp SFML_MazeGame/StartEnd.h Screen.cpp Screen.h SFML_BouncingBall/BouncingBallGame.cpp SFML_BouncingBall/BouncingBallGame.h SFML_BouncingBall/Ball.cpp SFML_BouncingBall/paddle.cpp SFML_BouncingBall/Controls.cpp SFML_TopHatGuy/TopHatGuy.cpp SFML_TopHatGuy/TopHatGuyGame.cpp SFML_TopHatGuy/TopHatGuyGame.h SFML_PokerAnalysis/A_PokerAnalysisGame.cpp SFML_PokerAnalysis/A_PokerAnalysisGame.h SFML_PokerAnalysis/Card.cpp SFML_PokerAnalysis/CardHand.cpp SFML_PokerAnalysis/CardHandScore.cpp SFML_PokerAnalysis/Deck.cpp SFML_PokerAnalysis/DrawCardHand.cpp SFML_PokerAnalysis/DrawingAllScores.cpp SFML_PokerAnalysis/DrawingCard.cpp SFML_PokerAnalysis/DrawPokerHand.cpp SFML_PokerAnalysis/DrawScoreName.cpp SFML_PokerAnalysis/DrawScoreRate.cpp SFML_PokerAnalysis/PokerScore.cpp SFML_PokerAnalysis/PokerTextScore.cpp SFML_MazeGame/A_MazeGame.cpp SFML_MazeGame/A_MazeGame.h SFML_MazeGame/MazeMenu.cpp SFML_MazeGame/MazeMenu.h)

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_executable(${PROJECT_NAME} WIN32 ${SOURCE_FILES})
else ()
    add_executable(${PROJECT_NAME} ${SOURCE_FILES})
endif ()

set(SFML_ROOT C:/SFML-2.5.1)
set(SFML_STATIC_LIBRARIES TRUE)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
#set(SFML_DIR C:/SFML/SFML-2.5.1/lib/cmake/SFML)
find_package(SFML  REQUIRED COMPONENTS audio graphics window system)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif ()