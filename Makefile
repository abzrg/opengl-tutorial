BUILDDIR = build

all: build/CMakeCache.txt
	$(MAKE) -C $(BUILDDIR) all

build/CMakeCache.txt:
	mkdir $(BUILDDIR)
	cmake -S . -B $(BUILDDIR) --log-level=VERBOSE

clean:
	$(MAKE) -C $(BUILDDIR) clean
