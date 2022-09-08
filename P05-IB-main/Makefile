CC = g++
CFLAGS = -Wall -g

all: data_types change_case references boolean_operators arithmetic_operators short_cirtuit

data_types: data_types.cc
	${CC} ${CFLAGS} data_types.cc -o data_types

change_case: change_case.cc
	${CC} ${CFLAGS} change_case.cc -o change_case

references: references.cc
	${CC} ${CFLAGS} references.cc -o references

boolean_operators: boolean_operators.cc
	${CC} ${CFLAGS} boolean_operators.cc -o boolean_operators

arithmetic_operators: arithmetic_operators.cc
	${CC} ${CFLAGS} arithmetic_operators.cc -o arithmetic_operators

short_cirtuit: short_cirtuit.cc
	${CC} ${CFLAGS} short_cirtuit.cc -o short_cirtuit


clean:
	rm -f *.o data_types change_case references boolean_operators arithmetic_operators short_cirtuit