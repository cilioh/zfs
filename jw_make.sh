#!/bin/bash

sh ./autogen.sh
./configure --with-spec=redhat
make pkg-utils rpm-dkms rpm-kmod

yum localinstall *.x86_64.rpm
