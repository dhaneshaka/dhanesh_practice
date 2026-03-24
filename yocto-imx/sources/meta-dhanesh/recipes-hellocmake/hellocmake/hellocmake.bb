DESCRIPTION="recipe example for hellocmake"

LICENSE="CLOSED"

SRC_URI="file://CMakeLists.txt \
	file://hellocmake.c"

S="${WORKDIR}"
DEPENDS += "cmake-native"

inherit cmake
