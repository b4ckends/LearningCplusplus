#!/bin/bash
# Compile and run a C++ file

if [ $# -ne 1 ]; then
	echo "Usage: $0 <cpp_filename>"
	exit 1
fi

cpp_filename="$1"
output_filename="${cpp_filename%.cpp}"

g++ -o "$output_filename" "$cpp_filename" && "./$output_filename"

exit 0
