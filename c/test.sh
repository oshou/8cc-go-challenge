#!/bin/bash

function test{
    expected="$1"
    expr="$2"
    echo "$expr" | ./8cc > tmp.s
    
    if [ ! $? ];then
        
    fi
}