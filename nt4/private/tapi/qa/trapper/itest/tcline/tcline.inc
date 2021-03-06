!IF 0

Copyright (c) 1989-1993  Microsoft Corporation

Module Name:

    sources.

Abstract:

    This file specifies the target component being built and the list of
    sources files needed to build that component.  Also specifies optional
    compiler switches and libraries that are unique for the component being
    built.

Author:

    John Rogers (JohnRo) 25-Oct-1991

NOTE:   Commented description of this file is in \nt\public\oak\bin\sources.tpl

Revision History:

!ENDIF

MAJORCOMP=net
MINORCOMP=tapi

TARGETNAME=tcline
TARGETPATH=$(BASEDIR)\public\sdk\lib
TARGETTYPE=DYNLINK
TARGETLIBS=$(BASEDIR)\public\sdk\lib\*\kernel32.lib \
           $(BASEDIR)\public\sdk\lib\*\advapi32.lib \
           $(BASEDIR)\public\sdk\lib\*\user32.lib 


DLLDEF=..\tcline.def
DLLBASE=0x66000000

INCLUDES=..;..\..;..\..\..\..\tcore;..\..\..
		

USE_CRTDLL=1

SOURCES=	..\cline.c \
		..\itlatc.c \
		..\itlgcrc.c \
		..\itlpatc.c  \
		..\itlrfc.c  \
		..\itlsuc.c \
		..\itlcc.c	\
		..\itlrd.c \
		..\itlsc.c	\
		..\itlsh.c	\
		..\ittgli.c  \
		..\ittrd.c  \
		..\ittrmc.c  \
		..\ittrmec.c \
		..\uline.c \
		..\cline.rc
		


C_DEFINES=-DWINVER=0x400 -DTAPI_NT=1 -DTAPI_1_0=1 -DTAPI_1_1=1 -DTAPI_2_0=1 


UMTYPE=windows

DLLENTRY=TCLineDllMain

!IFNDEF 386_WARNING_LEVEL
386_WARNING_LEVEL=/W3
!ENDIF
