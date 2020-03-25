#!/usr/bin/python
#-*-coding:utf-8-*-
#__author__:TaQini

from subprocess import *
fix = ''
while 1:
    for i in range(0x100):
        payload = fix+chr(i)
        f = open('./a','w+')
        tmp = f.write(payload)
        f.close()
        p = Popen(['./diff','./a','./flag'],stdout=PIPE)
        res = p.stdout.read()
        if res != '1':
            print res,chr(0x100-i)
            fix+=chr(0x100-i)
            break
