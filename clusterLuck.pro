QT -= core
QT -= gui
mac {
  CONFIG -= app_bundle
}
TARGET = clusterLuck
CONFIG += console
unix:LIBS += -L/usr/lib -L$(BOOST_HOME)/lib -L$(MPI_HOME)/lib -lboost_mpi -lmpi -lmpi_cxx -lboost_system -lboost_serialization -lboost_thread
unix:INCLUDEPATH += ./include
unix:INCLUDEPATH += $(BOOST_HOME)/include
unix:INCLUDEPATH += $(MPI_HOME)/include
unix:INCLUDEPATH += /usr/include/mpi
SOURCES += src/main.cpp
SOURCES += src/ClusterConnectionImpl.cpp
SOURCES += src/ClusterPollerImpl.cpp
