#!/bin/bash

# List your names on the following lines
# Name 1:
# Name 2:

if [ ! $# -eq 1 ]; then
	echo "Error: expected a file as the first argument"
	echo "    Usage: $0 FILE"
	exit 1
fi

# Begin your commands here

# You should delete/modify the following lines as you see fit
grep 'href' $1 > tempfile1.txt
cat tempfile1.txt
rm tempfile1.txt

# End your commands here
