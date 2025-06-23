gcc -o main.obj main.c -c
gcc -o func.obj func.c -c
gcc main.obj func.obj -o kr.exe