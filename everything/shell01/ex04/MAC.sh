#!/bin/sh

ifconfig | grep -w 'ether\|lladdr' | cut -c 8- | tr -d ' ' | sed G
