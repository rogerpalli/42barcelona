#!/bin/bash
git log | grep commit | tail -n 5 | cut -f 2 -d ' '
