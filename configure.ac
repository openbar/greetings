AC_INIT([greetings], [1.0])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])

AC_PROG_CC

AC_CHECK_PROG([GEN_GREETINGS_FMT], [gen_greetings_fmt], [gen_greetings_fmt], [no])
AS_IF([test x$GEN_GREETINGS_FMT != xno],
      [AC_DEFINE_UNQUOTED([GREETINGS_FMT], ["`$GEN_GREETINGS_FMT`"])])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
