#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/DaThuc.o \
	${OBJECTDIR}/Date.o \
	${OBJECTDIR}/Lich_Nam.o \
	${OBJECTDIR}/Ma_tran.o \
	${OBJECTDIR}/NV.o \
	${OBJECTDIR}/NhanVien.o \
	${OBJECTDIR}/PT_BacNhat_2An.o \
	${OBJECTDIR}/Person.o \
	${OBJECTDIR}/PhanSo.o \
	${OBJECTDIR}/Point_TD.o \
	${OBJECTDIR}/QLSV.o \
	${OBJECTDIR}/SoNguyenTo.o \
	${OBJECTDIR}/SoPhuc.o \
	${OBJECTDIR}/TamGiac.o \
	${OBJECTDIR}/ThiSinh.o \
	${OBJECTDIR}/Time.o \
	${OBJECTDIR}/ToaDo.o \
	${OBJECTDIR}/Toa_Do.o \
	${OBJECTDIR}/UCLN.o \
	${OBJECTDIR}/Vector.o \
	${OBJECTDIR}/VienPhi.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/matrix.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/DaThuc.o: DaThuc.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DaThuc.o DaThuc.cpp

${OBJECTDIR}/Date.o: Date.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Date.o Date.cpp

${OBJECTDIR}/Lich_Nam.o: Lich_Nam.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Lich_Nam.o Lich_Nam.cpp

${OBJECTDIR}/Ma_tran.o: Ma_tran.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ma_tran.o Ma_tran.cpp

${OBJECTDIR}/NV.o: NV.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/NV.o NV.cpp

${OBJECTDIR}/NhanVien.o: NhanVien.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/NhanVien.o NhanVien.cpp

${OBJECTDIR}/PT_BacNhat_2An.o: PT_BacNhat_2An.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PT_BacNhat_2An.o PT_BacNhat_2An.cpp

${OBJECTDIR}/Person.o: Person.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Person.o Person.cpp

${OBJECTDIR}/PhanSo.o: PhanSo.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PhanSo.o PhanSo.cpp

${OBJECTDIR}/Point_TD.o: Point_TD.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Point_TD.o Point_TD.cpp

${OBJECTDIR}/QLSV.o: QLSV.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/QLSV.o QLSV.cpp

${OBJECTDIR}/SoNguyenTo.o: SoNguyenTo.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/SoNguyenTo.o SoNguyenTo.cpp

${OBJECTDIR}/SoPhuc.o: SoPhuc.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/SoPhuc.o SoPhuc.cpp

${OBJECTDIR}/TamGiac.o: TamGiac.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TamGiac.o TamGiac.cpp

${OBJECTDIR}/ThiSinh.o: ThiSinh.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ThiSinh.o ThiSinh.cpp

${OBJECTDIR}/Time.o: Time.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Time.o Time.cpp

${OBJECTDIR}/ToaDo.o: ToaDo.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ToaDo.o ToaDo.cpp

${OBJECTDIR}/Toa_Do.o: Toa_Do.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Toa_Do.o Toa_Do.cpp

${OBJECTDIR}/UCLN.o: UCLN.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/UCLN.o UCLN.cpp

${OBJECTDIR}/Vector.o: Vector.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Vector.o Vector.cpp

${OBJECTDIR}/VienPhi.o: VienPhi.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/VienPhi.o VienPhi.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/matrix.o: matrix.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/matrix.o matrix.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
