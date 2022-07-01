#!/bin/bash

cmake -DCMAKE_BUILD_TYPE=Debug -DMESSAGE_DEBUGGING=true -Bbuild/default -H.
cmake --build build/default -j8
sudo cmake --build build/default --target install