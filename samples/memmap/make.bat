call ..\..\bin\oscar64 largemem.c
call ..\..\bin\oscar64 allmem.c
call ..\..\bin\oscar64 charsetlo.c
call ..\..\bin\oscar64 charsethi.c
call ..\..\bin\oscar64 charsetcopy.c
call ..\..\bin\oscar64 charsetexpand.c
call ..\..\bin\oscar64 charsetload.c -d64=charsetload.d64 -fz=../resources/charset.bin
call ..\..\bin\oscar64 easyflash.c -n -tf=crt
call ..\..\bin\oscar64 easyflashreloc.c -n -tf=crt
call ..\..\bin\oscar64 easyflashshared.c -n -tf=crt
call ..\..\bin\oscar64 tsr.c -n -dNOFLOAT -dNOLONG
