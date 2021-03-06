#!/bin/sh
SRC_DIR=./
DST_DIR=..

#C++
#mkdir -p $DST_DIR/cpp
protoc -I=$SRC_DIR --cpp_out=$DST_DIR/cc/ $SRC_DIR/*.proto

#GO
protoc -I=$SRC_DIR --go_out=$DST_DIR/go/ $SRC_DIR/*.proto

#JAVA
#mkdir -p $DST_DIR/java
#protoc -I=$SRC_DIR --java_out=$DST_DIR/java/ $SRC_DIR/*.proto

#PYTHON
#mkdir -p $DST_DIR/python
#protoc -I=$SRC_DIR --python_out=$DST_DIR/python/ $SRC_DIR/*.proto

