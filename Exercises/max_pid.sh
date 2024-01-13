#!/bin/bash

# Define the path to the pid_max file
pid_max_file="/proc/sys/kernel/pid_max"

# Check if the file exists
if [ -e "$pid_max_file" ]; then
    # Read and print the maximum PID value
    max_pid=$(cat "$pid_max_file")
    echo "Maximum Process ID: $max_pid"
else
    echo "Error: $pid_max_file not found."
fi

