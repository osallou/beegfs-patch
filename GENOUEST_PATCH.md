# Patch to build against kernel 5.10

This patch modifies **client part only**: client/client-dkms/helperd/common/utils/infiniband

Tested only on client version 7.1.5

Tested only on Debian Bullseye

## Build

Install dependencies shown in README and linux-headers-amd64

To build client module, update if necessary (error on kernel headers not found)
client_module/build/Makefile and Release.mk **KDIR** to match your kernel:

    KDIR = /usr/src/linux-headers-5.10.0-9-amd64 /usr/src/linux-headers-5.10.0-9-common

To compile

    # To compile all client packages (including client kernel module)
    make all
    # To compile only commons/helperd
    make daemons

## Debian packages

    BEEGFS_VERSION=7.1.5 make package-deb PACKAGE_DIR=/tmp/beegfs


