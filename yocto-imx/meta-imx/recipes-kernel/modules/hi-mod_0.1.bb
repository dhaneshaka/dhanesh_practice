DESCRIPTION="recipe (.bb file) for driver"

LICENSE="CLOSED"


SRC_URI="file://hello-mod.c \
	file://Makefile \
"


S="${WORKDIR}"

inherit module
