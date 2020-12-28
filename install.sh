#!/bin/bash
make
sudo mkdir /recycle 2>/dev/null
sudo chown `whoami` /recycle
sudo mv rc /usr/bin/
