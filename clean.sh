#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

find $DIR/examples -type d | grep 'exp$' | xargs rm -rf
find $DIR/examples -type d | grep 'cib$' | xargs rm -rf

find $DIR/demo -type d | grep 'exp$' | xargs rm -rf
find $DIR/demo -type d | grep 'cib$' | xargs rm -rf

find $DIR/tests -type d | grep 'exp$' | xargs rm -rf
find $DIR/tests -type d | grep 'cib$' | xargs rm -rf

