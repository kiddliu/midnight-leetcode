#!/bin/bash

grep -P '^(\d{3}-|\(\d{3}\) )\d{3}-\d{4}$' file.txt
grep -E "^(\(\d{3}\) |\d{3}-)\d{3}-\d{4}$" file.txt
