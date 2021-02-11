#include<iostream>
#include <Windows.h>
#include<stdio.h>
#define MAX_THREADS 2

using namespace std;
DWORD WINAPI threadFunc1( LPVOID lpParam );
DWORD WINAPI threadFunc2( LPVOID lpParam );
DWORD retVal;
DWORD ThreadID1,ThreadID2;
HANDLE hThread[MAX_THREADS];
int count1=0,count2=0;
