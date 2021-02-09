#include "testApp.h"


using namespace std;
std::string filetext = "File handling sample test";

DWORD bytesWritten;
DWORD WINAPI threadFunc1( LPVOID lpParam );
DWORD WINAPI threadFunc2( LPVOID lpParam );
DWORD retVal;
DWORD ThreadID;
HANDLE hThread[MAX_THREADS];
int count=0;
DWORD WINAPI threadFunc1(LPVOID lpParam )
{

	while(count <10)
	{
		printf("thread1");
		count++;
		Sleep(1000);
	}
	count=0;
	cout<<"thread 1 running"<<endl;
    return 0;
}
DWORD WINAPI threadFunc2(LPVOID lpParam )
{
	cout<<"thread 2 running"<<endl;
    return 0;
}

int testApp( void )
{



	  HANDLE hFile = CreateFile(
      "D:\\NewFile1.txt",     // Filename
      GENERIC_WRITE,          // Desired access
      FILE_SHARE_READ,        // Share mode
      NULL,                   // Security attributes
      CREATE_NEW,             // Creates a new file, only if it doesn't already exist
      FILE_ATTRIBUTE_NORMAL,  // Flags and attributes
      NULL);

   if (hFile == INVALID_HANDLE_VALUE)
   {
      cout<<"create file failed\n"<<GetLastError()<<endl;

   }
      cout<<"create file success\n"<<GetLastError()<<endl;


      WriteFile(
      hFile,            // Handle to the file
      filetext.c_str(),  // Buffer to write
      filetext.size(),   // Buffer size
      &bytesWritten,    // Bytes written
      NULL);         // Overlapped


      CloseHandle(hFile);
      Sleep(5000);

      	hThread[1] = CreateThread(
        NULL,    // Thread attributes
        0,       // Stack size (0 = use default)
        threadFunc1, // Thread start address
        NULL,    // Parameter to pass to the thread
        0,       // Creation flags
        &ThreadID);   // Thread id
    if (hThread == NULL)
    {
		cout<<"thread 1 create failed\n"<<GetLastError()<<endl;
        return 1;
    }
		cout<<"ThreadID"<<ThreadID<<endl;

		hThread[2] = CreateThread(
        NULL,    // Thread attributes
        0,       // Stack size (0 = use default)
        threadFunc2, // Thread start address
        NULL,    // Parameter to pass to the thread
        0,       // Creation flags
        NULL);   // Thread id
    if (hThread == NULL)
    {
    	cout<<"thread 2 create failed\n"<<GetLastError()<<endl;
        return 1;
    }




		return 0;
}

void endthread(void)
{
		retVal = WaitForMultipleObjects( MAX_THREADS,    // number of threads to wait for
	                                        hThread, 		// handles for threads to wait for
	                                        TRUE,          // wait for all of the threads
	                                        INFINITE       // wait forever
	                                       );
	       // Thread handle must be closed when no longer needed
	    CloseHandle(hThread[1]);
	    CloseHandle(hThread[2]);

	   	system("PAUSE");
	   	LOG_DEBUG( "touchGfx App\n" );

}
