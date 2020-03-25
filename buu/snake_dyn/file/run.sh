#!/bin/sh
echo "ctf:sNaKes" | chpasswd
chown -R root:root /home/ctf/
echo $FLAG > /home/ctf/flag
chown root:ctf_pwn /home/ctf/flag
chmod 640 /home/ctf/flag
export FLAG=not_flag
FLAG=not_flag

chown root:ctf_pwn /home/ctf/flag
chown root:ctf_pwn /home/ctf/snake
chown root:ctf_pwn /home/ctf/snake.c
chmod 2555 /home/ctf/snake
chmod 644 /home/ctf/snake.c

/usr/sbin/sshd -D
