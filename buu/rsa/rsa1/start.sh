#!/bin/sh
# Add your startup script

# DO NOT DELETE

# Dynamic flag generated by CTFd-whale
echo $FLAG > /home/ctf/flag
chown root:ctf /home/ctf/flag
chmod 640 /home/ctf/flag
export FLAG=not_flag
FLAG=not_flag

chmod +x /home/ctf/rsa1.py

/home/ctf/rsa1.py
trap : TERM INT; 
sleep infinity & wait\

