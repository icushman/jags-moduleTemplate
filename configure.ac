AC_PREREQ([2.68])

AC_INIT([JAGS-EXAMPLE], [0.9.0], [email@me.com], [JAGS-EXAMPLE-MODULE])
JAGS_MAJOR=4
JAGS_MINOR=0
AC_SUBST(JAGS_MAJOR)
AC_SUBST(JAGS_MINOR)

AC_CANONICAL_HOST
AC_CONFIG_SRCDIR([src/functions/templateFun1.cc])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE

LT_PREREQ(2.2.6)
LT_CONFIG_LTDL_DIR([libltdl])
LT_INIT([dlopen disable-static win32-dll])
LTDL_INIT([recursive])

AC_PROG_CXX

AC_DEFINE(MATHLIB_STANDALONE, 1, [Define if you have standalone R math library])

case "${host_os}" in
  mingw*)
    win=true;;
  *)
    win=false;;
esac
AM_CONDITIONAL(WINDOWS, test x$win = xtrue)

jagsmoddir=${libdir}/x86_64-linux-gnu/JAGS/modules-${JAGS_MAJOR}
AC_SUBST(jagsmoddir)

AC_CONFIG_FILES([
  Makefile
  libltdl/Makefile
  src/Makefile
  src/functions/Makefile
  src/distributions/Makefile
])
AC_OUTPUT
