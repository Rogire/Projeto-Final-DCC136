if [ -z "$1" ]; then
    PARAM=""
else
    PARAM="$1"
fi

if [ "$PARAM" == "build" ]; then
    g++ src/main.cpp -o build/exec
else
    g++ src/main.cpp -o build/exec && ./build/exec
fi
