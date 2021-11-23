# Patch to build against kernel 5.10

This patch modifies **client part only**: client/client-dkms/helperd/common/utils

Tested only on client version 7.1.5

Tested only on Debian Bullseye

## Build

Install dependencies shown in README

    make all

## Debian packages

    BEEGFS_VERSION=1.7.5 make package-deb PACKAGE_DIR=/tmp/beegfs


