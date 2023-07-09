#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char* argv[])
{
    // printf(1, "hello world");
    // printf(5,"what are u doing\n");
    // printf(1,"org\n");
    int pid[2];
    pid[0] = fork();
    if (pid[0]>0){
        int* arr;
        arr = (int*) malloc(10 * sizeof(int));
        arr[5] = 9;
    }
    else{
        while(1){}
    }
    pid[1] = fork();
    if (pid[1]>0){
        int* arr1;
        arr1 = (int*) malloc(30 * sizeof(int));
        arr1[5] = 9;
    }
    else{
        int* arr3;
        arr3 = (int*) malloc(30 * sizeof(int));
        arr3[5] = 9;
        while(1){}
    }
    pid[2] = fork();
    if (pid[2]>0){
        int* arr2;
        arr2 = (int*) malloc(10 * sizeof(int));
        arr2[5] = 9;
        sleep(50);
        proc_dump();
        exit();
    }
    else{
        while(1){}
    }
}