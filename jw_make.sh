#!/bin/bash


#rm -rf *.rpm
#make clean

sh ./autogen.sh
./configure --with-spec=redhat
make pkg-utils rpm-dkms rpm-kmod

yum localinstall *.x86_64.rpm
