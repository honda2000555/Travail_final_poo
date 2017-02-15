case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C1"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(EIFFEL_LIBRARY)/contrib/library/game2/game_core/spec/include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\SDL2\include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\cpf\spec\include" -I"\$(ISE_LIBRARY)\library\time\spec\include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\SDL2_image\include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\SDL2_ttf\include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\SDL2_gfx\include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\OpenAL\include" -I"\$(EIFFEL_LIBRARY)/contrib/library/game2/audio_sound_file/spec/include" -I"\$(EIFFEL_LIBRARY)\contrib\library\game2\C_lib_win\libsndfile\include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $windows_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = travail_poo$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C1_c.o 

OLDOBJECTS =  ap963.o ap963d.o im973.o im973d.o te972.o te972d.o au980.o au980d.o \
	au986.o au986d.o ga962.o ga962d.o ga989.o ga989d.o im961.o im961d.o \
	ga960.o ga960d.o au959.o au959d.o au988.o au988d.o au985.o au985d.o \
	th982.o th982d.o ga958.o ga958d.o ga983.o ga983d.o au984.o au984d.o \
	au987.o au987d.o th981.o th981d.o ga970.o ga970d.o ga971.o ga971d.o \
	ga979.o ga979d.o ga968.o ga968d.o ga969.o ga969d.o ga966.o ga966d.o \
	ga967.o ga967d.o ga976.o ga976d.o ga975.o ga975d.o ga978.o ga978d.o \
	ga977.o ga977d.o ga965.o ga965d.o ga964.o ga964d.o ga974.o ga974d.o 

all: Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj1.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

