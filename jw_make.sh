#!/bin/bash

#rm -rf *.rpm
#make clean

echo y | yum remove '*zfs*'

sh ./autogen.sh
./configure --with-spec=redhat
make -j32 pkg-utils rpm-dkms rpm-kmod

echo y | yum localinstall *.x86_64.rpm

echo y | yum localinstall ../lustre-release/kmod-lustre-osd-zfs*
echo y | yum localinstall ../lustre-release/lustre-osd-zfs-mount*
