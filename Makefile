CC= gcc
LIBS= 
HEADERDIR=header
CFLAGS=-Wall -g -I$(HEADERDIR)

SRCDIR=src
SRCS:=main.c network.c 
SRCS:=$(addprefix $(SRCDIR)/,$(SRCS) )

BUILDDIR=build
OBJS:=log.o 
OBJS:=$(addprefix $(BUILDDIR)/,$(OBJS) )

EXE=main

all: $(EXE)


$(EXE): $(OBJS)
	$(CC) $(CFLAGS) $(SRCDIR)/main.c -o $(EXE) $(LIBS) $(OBJS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	$(CC) -c $(CFLAGS) $< -o $(BUILDDIR)/$(notdir $@) 

clean:
	$(RM) $(EXE) $(OBJS)
