cat /etc/passwd | sed '/^#/d' | awk 'NR%2 == 0' | sed -n "$FT_LINE1,$FT_LINE2" | sed 's/:.*//' | rev | sort -r | tr '\n' ',' | sed 's/.$/./'
