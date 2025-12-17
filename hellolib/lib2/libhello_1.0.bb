DESCRIPTION="recepie file for libhello example"

LICENSE="CLOSED"

SRC_URI="file://hello.c"

S="${WORKDIR}"

do_compile(){
	${CC} -fPIC -c hello.c -o hello.o
	${CC} ${LDFLAGS} -shared -o libhello.so.1 hello.o
}

do_install(){
	install -d ${D}/usr/lib
	install -m 777 ${S}/libhello.so.1 ${D}/usr/lib
	cd ${D}/usr/lib
	ln -sf libhello.so.1 libhello.so

}
