#! /bin/sh
cat /etc/passwd | cut -d ':' -f1 | sed -n 'p;n' | rev | sort -rn |awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | tr '\n' ' ' | sed 's/ /,/g' | sed 's/,$/./g'
