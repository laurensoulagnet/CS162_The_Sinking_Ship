CXX = g++
CXXFLAGS = -std=c++0x
CSSFLAGS += -g

OBJS = Final.o

SRCS = main.cpp finalroom.cpp moveitems.cpp ocean.cpp room.cpp roomswithpeople.cpp roomwithoutpeople.cpp setrooms.cpp
HEADERS = finalroom.h moveitems.h ocean.h room.h roomswithpeople.h roomwithoutpeople.h setrooms.h

Final: ${SRCS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${SRCS} -o Final

