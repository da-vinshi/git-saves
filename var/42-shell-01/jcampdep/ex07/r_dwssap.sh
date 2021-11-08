#!/bin/sh
cat /etc/passwd | grep -o '^[^#].*' | sed 's/:.*$//' | sed 'n; d' | rev | sort -r | head -n $FT_LINE2 | tail -n +$FT_LINE1 | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./'
