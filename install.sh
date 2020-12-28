#!/bin/bash
make
sudo mkdir /recycle 2>/dev/null
chown root rc
chmod a+s rc
sudo mv rc /usr/bin/
