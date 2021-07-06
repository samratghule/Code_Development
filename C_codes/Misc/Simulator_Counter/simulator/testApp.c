#include "testApp.h"

#include <iostream>
#include <Windows.h>
#include <string>
#include<stdio.h>
#include <simulator/mainBase.hpp>
#include <gui/main_screen/MainView.hpp>


#include <gui_generated/main_screen/MainViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
DWORD WINAPI threadFunc1( LPVOID lpParam );
extern void buttonCallbackHandler(const touchgfx::AbstractButton& src);
#define MAX_THREADS 1
int flag=0;
DWORD ThreadID1;
HANDLE hThread[MAX_THREADS];




extern uint8_t mycount[2];



DWORD WINAPI threadFunc1(LPVOID lpParam )
{
	int fd,len=0;
						char buff[6];
						uint8_t recv_buf[6]={0};


						//fd = open("COM3", O_RDONLY);
						 fd = open ("COM3", O_RDWR);
						if(fd < 0){
							perror("open() failed");
							_exit(1);
						}
						char *token;

						touchgfx_printf("HI");
			while (1)
			{

			  len = read(fd, &buff,sizeof(buff));
			  token = strtok(buff," ");


					int i =0;
					while(token !=NULL){
						recv_buf[i++] = (int)strtol(token,NULL,16);
						token=strtok(NULL," ");
					}


					touchgfx_printf("%d\n",len/3);
					for(int x=0;x<len/3; x++)
					touchgfx_printf("%x\n",recv_buf[x]);

			touchgfx_printf("\n");
			  if (recv_buf[0]>0 && recv_buf[2] <100)
			  {
				mycount[0]=recv_buf[0];
				mycount[1]=recv_buf[1];

				write(fd,recv_buf,2);
				//write (fd, "hello!\n", 7);
				flag=1;
			  }

			}
			close(fd);



    return 0;
}






int testApp( void )
{


		hThread[1] = CreateThread(
			        NULL,    // Thread attributes
			        0,       // Stack size (0 = use default)
			        threadFunc1, // Thread start address
			        NULL,    // Parameter to pass to the thread
			        0,       // Creation flags
			        &ThreadID1);

				if (hThread == NULL)
				        {
				      //      cout<<"thread 1 create failed\n"<<GetLastError()<<endl;
				            return 1;
				        }
				       //     cout<<"Thread 1 ID: "<<ThreadID1<<endl;




				 if (hThread == NULL)
				        {
				        //    cout<<"thread 2 create failed\n"<<GetLastError()<<endl;
				            return 1;
				        }
				        //    cout<<"Thread 2 ID: "<<ThreadID2<<endl;
				 WaitForMultipleObjects(MAX_THREADS, hThread, TRUE, INFINITE);
				//CloseHandle(hThread[1]);




	return 0;
}
