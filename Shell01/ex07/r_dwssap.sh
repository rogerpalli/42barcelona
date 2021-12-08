#!/bin/sh
cat /etc/passwd	| grep -v '\#' | awk 'NR % 2 == 0' | awk -F':' '{print $1}' | rev | sort -fnr | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | awk 1 ORS=', ' | sed 's/, $/./' | tr -d '\n'
