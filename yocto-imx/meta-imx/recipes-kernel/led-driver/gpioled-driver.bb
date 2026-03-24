DESCRIPTION = "recipe(.bb file) for led driver"
LICENSE = "CLOSED"

inherit module

SRC_URI = "file://gpioled.c \
           file://Makefile"

S = "${WORKDIR}"
