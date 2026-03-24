DESCRIPTION="recipe example for helloc"
LICENSE="CLOSED"
SRC_URI="file://helloc.c"
S="${WORKDIR}"
do_compile(){
	cd ${S}
	${CC} ${LDFLAGS} helloc.c -o helloc

}
do_install(){
	install -d ${D}/usr/bin
	install -m 777 ${S}/helloc ${D}/usr/bin

}

