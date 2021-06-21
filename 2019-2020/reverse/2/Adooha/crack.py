#!/usr/bin/python3

import sys

start = int(sys.argv[1])
stop = int(sys.argv[2])
step = int(sys.argv[3])

print(start, end = '')
for i in range(start + step, stop, step):
	print(',', i, sep = '', end = '')
print()
