#!/bin/sh
module=misc
device=beagleboneblack_i2c_driver
mode="664"
cd `dirname $0`
set -e
# Group: since distributions do it differently, look for wheel or use staff
if grep -q '^staff:' /etc/group; then
    group="staff"
else
    group="wheel"
fi


echo "Loading local built file ${module}.ko"
insmod /lib/modules/4.14.40/extra/i2c.ko || exit 1

major=$(awk "\$2==\"$module\" {print \$1}" /proc/devices)
rm -f /dev/${device}
mknod /dev/${device} c $major 0
chgrp $group /dev/${device}
chmod $mode  /dev/${device}
