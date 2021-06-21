#!/usr/bin/env python3

# Generate serial for name 'SPb_CTF_2017'

name = "SPb_CTF_2017"
name = bytes(name, 'utf-8')

valid = [
	int.from_bytes(name[:4], 'big'),
    int.from_bytes(name[4:8], 'big'),
    int.from_bytes(name[8:], 'big')
]

valid[0] ^= valid[2]
valid[2] ^= valid[0]
valid[0] ^= valid[2]

print('{:08x}-{:08x}-{:08x}'.format(*valid))