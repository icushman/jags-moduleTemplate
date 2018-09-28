SUBDIRS = distributions functions

jagsmod_LTLIBRARIES = example.la

example_la_SOURCES = example.cc

example_la_CPPFLAGS = -I$(includedir)/JAGS

example_la_LIBADD = distributions/exampledist.la
example_la_LIBADD += functions/examplefunc.la

if WINDOWS
example_la_LIBADD += -ljags-$(JAGS_MAJOR)
else
example_la_LIBADD += -ljags
endif

example_la_LDFLAGS = -module -avoid-version
if WINDOWS
example_la_LDFLAGS += -no-undefined
endif
