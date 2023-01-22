#!/bin/bash
mkdir $1
cp ./template.cpp $1/main.cpp
touch $1/input.in 
cp ./compile.sh $1/compile.sh
chmod +x $1/compile.sh