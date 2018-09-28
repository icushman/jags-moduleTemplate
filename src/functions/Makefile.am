noinst_LTLIBRARIES = examplefunc.la

examplefunc_la_CPPFLAGS = -I$(top_srcdir)/src -I$(includedir)/JAGS

examplefunc_la_LDFLAGS = -no-undefined -module -avoid -version

examplefunc_la_SOURCES = templateFun1.cc
examplefunc_la_SOURCES += templateFun2.cc
examplefunc_la_SOURCES += templateFun3.cc

noinst_HEADERS = templateFun1.h
noinst_HEADERS += templateFun2.h
noinst_HEADERS += templateFun3.h
