cmake_minimum_required(VERSION 2.6)
PROJECT( objectdetectiontestercomp )
IF(NOT EXISTS $ENV{ROBOCOMP}/cmake)
MESSAGE(FATAL_ERROR "
 ROBOCOMPROOT variable not set, check your bashrc profile!
")
ENDIF(NOT EXISTS $ENV{ROBOCOMP}/cmake)
INCLUDE( $ENV{ROBOCOMP}/cmake/robocomp.cmake )
INCLUDE ( CMakeListsSpecific.txt)

# Sources set
SET ( SOURCES
  ${SOURCES}
  objectdetectiontestercomp.cpp
  
  genericmonitor.cpp
  commonbehaviorI.cpp
  genericworker.cpp
  $ENV{ROBOCOMP}/classes/rapplication/rapplication.cpp
  $ENV{ROBOCOMP}/classes/qlog/qlog.cpp
)

# Headers set
SET ( HEADERS
  ${HEADERS}
  
  genericmonitor.h
  commonbehaviorI.h
  genericworker.h
)
#ROBOCOMP
ROBOCOMP_INITIALIZE( $ENV{ROBOCOMP}/ )
ROBOCOMP_WRAP_ICE( CommonBehavior   objectDetection)
SET (EXECUTABLE_OUTPUT_PATH ../bin)

# Qt4
ADD_DEFINITIONS( -Wall -DQT_DLL -DQT_GUI_LIB -DQT_CORE_LIB )
FIND_PACKAGE( Qt4 REQUIRED )
SET( QT_USE_QTGUI TRUE )
SET( QT_USE_QTOPENGL TRUE )
SET( QT_USE_QTXML TRUE )
SET( QT_USE_QTSTATE TRUE )
SET( QT_USE_QTSTATEMACHINE TRUE )
INCLUDE( ${QT_USE_FILE} )
QT4_WRAP_CPP( MOC_SOURCES ${HEADERS} )
QT4_WRAP_UI( UI_HEADERS guiDlg.ui )
# Specify construction and link process
ADD_EXECUTABLE( objectdetectiontestercomp ${SOURCES} ${MOC_SOURCES} ${RC_SOURCES} ${UI_HEADERS} )
TARGET_LINK_LIBRARIES( objectdetectiontestercomp ${QT_LIBRARIES} ${LIBS} ${STATIC_LIBS} ${SPECIFIC_LIBS})
INSTALL(FILES ${EXECUTABLE_OUTPUT_PATH}/objectdetectiontestercomp DESTINATION /opt/robocomp/bin/ PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE )