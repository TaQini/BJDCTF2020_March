#!/bin/sh
# Add your startup script

# DO NOT DELETE

# Dynamic flag generated by CTFd-whale
echo $FLAG > /home/ctf/imagin
export FLAG=not_flag
FLAG=not_flag
#echo "BJD{Imag!n_Ne.ed_y0u}" > /home/ctf/imagin
chown root:ctf /home/ctf/imagin
chmod 640 /home/ctf/imagin

# start ctf-xinetd
/etc/init.d/xinetd start; 
trap : TERM INT; 
#while :
#do 
#rm -rf /home/ctf/tmp/*
#sleep 60
#done
sleep infinity & wait\