DESCRIPTION = "GPIO Button Driver"
LICENSE = "CLOSED"

inherit module

SRC_URI = "file://ledbutton.c \
           file://Makefile \
          "

S = "${WORKDIR}"
