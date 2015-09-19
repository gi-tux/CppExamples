#definitions
MKDIR=mkdir -p
RMFORCE=rm -f
RMRECURSIVEFORCE=rm -rf
RMDIR=rmdir

# ALL depends on bin and obj and builds everything in src
all: bin obj
	cd src; make

clean: bin obj
	cd src; make clean
	$(RMDIR) bin
	$(RMDIR) obj

realclean:
	cd src; make clean
	$(RMRECURSIVEFORCE) bin
	$(RMRECURSIVEFORCE) obj
	
bin:
	$(MKDIR) bin

obj:
	$(MKDIR) obj
