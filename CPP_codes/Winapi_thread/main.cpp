#include "main_header.h"

DWORD WINAPI threadFunc1(LPVOID lpParam )
{

while(count1 <10)
	{
		cout<<"Thread 1: "<<endl;
		count1++;
		Sleep(100);
	}
count1=0;
    return 0;
}

DWORD WINAPI threadFunc2(LPVOID lpParam )
{
while(count2 <10)
	{
		printf("thread2\n");
		count2++;
		Sleep(100);
	}
count2=0;
    return 0;
}


int main()
{

      	hThread[1] = CreateThread(
        NULL,    // Thread attributes
        0,       // Stack size (0 = use default)
        threadFunc1, // Thread start address
        NULL,    // Parameter to pass to the thread
        0,       // Creation flags
        &ThreadID1);   // Thread id
        if (hThread == NULL)
        {
            cout<<"thread 1 create failed\n"<<GetLastError()<<endl;
            return 1;
        }
            cout<<"Thread 1 ID: "<<ThreadID1<<endl;

		hThread[2] = CreateThread(
        NULL,    // Thread attributes
        0,       // Stack size (0 = use default)
        threadFunc2, // Thread start address
        NULL,    // Parameter to pass to the thread
        0,       // Creation flags
        &ThreadID2);   // Thread id
        if (hThread == NULL)
        {
            cout<<"thread 2 create failed\n"<<GetLastError()<<endl;
            return 1;
        }
            cout<<"Thread 2 ID: "<<ThreadID2<<endl;

        retVal = WaitForMultipleObjects( MAX_THREADS,    // number of threads to wait for
	                                        hThread, 		// handles for threads to wait for
	                                        TRUE,          // wait for all of the threads
	                                        INFINITE       // wait forever
	                                       );
	       // Thread handle must be closed when no longer needed
	    CloseHandle(hThread[1]);
	    CloseHandle(hThread[2]);
	   	system("PAUSE");
        return 0;
}
