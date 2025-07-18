SUMMARY = "Example of how to build an external Linux kernel module"
LICENSE = "CLOSED"
#LIC_FILES_CHKSUM = "file://COPYING;md5=12f884d2ae1ff87c09e5b7ccc2c4ca7e"

inherit module

PR = "r0"
PV = "0.1"

SRC_URI = " \
	file://Makefile \
	file://ds3231_rtc.c \
	file://ds3231_rtc.h \
"
#file://COPYING

S = "${WORKDIR}"

# The inherit of module.bbclass will automatically name module packages
# with "kernel-module-" prefix as required by the oe-core build
# environment.s
