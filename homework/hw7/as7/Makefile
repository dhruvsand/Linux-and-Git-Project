CC = g++ -std=c++11
LIBS = -l pthread
OUT = runme

SRCS = $(wildcard *.cpp)
OUTS = $(patsubst %.cpp,%.o,$(SRCS))

$(OUT): $(OUTS)
	$(CC) -o $(OUT) $(OUTS) $(LIBS)

%.o: %.cpp
	$(CC) -c -o $@ $<

clean:
	rm *.o $(OUT)

list:
	@echo $(SRCS)
	@echo $(OUTS)
