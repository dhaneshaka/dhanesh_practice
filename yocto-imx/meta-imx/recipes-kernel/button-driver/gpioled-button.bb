DESCRIPTION = "GPIO LED Button Driver"
LICENSE = "CLOSED"

inherit module

SRC_URI = "file://gpioledbutton.c \
           file://Makefile \
	  "

S = "${WORKDIR}"
