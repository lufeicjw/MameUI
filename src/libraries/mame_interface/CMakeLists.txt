
set(PACKAGE_NAME mameInterface)

set(
	Sources

	GameList.cpp
	Settings.cpp
)

set(
	Headers

	GameList.h
	Settings.h
)

include(${QT_USE_FILE})
add_definitions(${QT_DEFINITIONS})

add_library(
	${PACKAGE_NAME}
	SHARED

	${Sources}
)

target_link_libraries(${PACKAGE_NAME} ${QT_LIBRARIES})
