#OTRO MAKEFILE JASSDJSJA!#

CAPETA= out
LIB= libftprintf.a

todo:
	gcc prueba.c ${LIB} -o print.o
	gcc prueba%c.c ${LIB} -o %c.o
	gcc prueba%s.c ${LIB} -o %s.o
	gcc prueba%d.c ${LIB} -o %d.o
	gcc prueba%p.c ${LIB} -o %p.o
	gcc prueba%u.c ${LIB} -o %u.o
	gcc prueba%i.c ${LIB} -o %i.o
	gcc prueba%xX.c ${LIB} -o %xX.o
	gcc prueba%%.c ${LIB} -o %%.o
	mv *o ${CAPETA}
	clear

break:
	rm ${CAPETA}/*.o


