#!/bin/sh
echo "ctf:guest" | chpasswd
chown -R root:root /home/ctf/
echo $FLAG > /home/ctf/flag
export FLAG=not_flag
FLAG=not_flag

chown root:ctf_pwn /home/ctf/flag
chown root:ctf_pwn /home/ctf/diff
chmod 640 /home/ctf/flag
chmod 2555 /home/ctf/diff

/usr/sbin/sshd -D
