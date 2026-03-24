DESCRIPTION = "Kernel module to blink LED"
LICENSE = "CLOSED"

inherit module

SRC_URI = "file://led.c \
           file://Makefile"

S = "${WORKDIR}"

EXTRA_OEMAKE += "KDIR=${STAGING_KERNEL_DIR}"
