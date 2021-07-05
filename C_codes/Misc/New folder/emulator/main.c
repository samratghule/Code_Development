#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <Windows.h>
#define SOD 0x23	// Start of Data Frame
#define EOD 0x24    // End of Data Frame
#define ACK 0x00    // Acknowlegment field
#define NACK 0x01   // Negative-Acknowledgment field
#define CRC_CALC 0  // To Calculate the CRC of receiving frame
#define CRC_CHECK 1 // To check if received frame as valid CRC or not


/******************************************************************************
* uint16_t CRC_Calc_Check(unsigned int *buf, int len , int action)
* Returns : if action == CRC_CALC  : returns the calculated CRC.
*             if action == CRC_CHECK : returns the whether actual and calculated CRC matches or not
* Arguments : *buf   : pointer pointing to the Array of commands.
*              len    : length of the recieved Array.
*              action : decides whether to calculate CRC or to check the received CRC
* Created by : Vrushali Salunke
* Date created : 28/06/2021
* Description : Calculate/Check CRC of Array Passed by reference
* ****************************************************************************/
uint16_t CRC_Calc_Check(unsigned int *buf, int len , int action){

	unsigned int crc = 0xFFFF, crc_poly = 0xA001, temp_input, actual_crc;

	if(action == CRC_CHECK){
		len-= 3;
	}

	for(int pos=0; pos<len; pos++){
		temp_input= buf[pos];
		crc ^= temp_input;                          // XOR with each recieved array's element
		for(int i= 0 ; i<8;i++)
		{
			if ((crc & 0x0001) != 0){               // If LSB is set
				crc >>= 1;                          // Perform right shift and XOR 0xA001
				crc ^= crc_poly;
			}
			else{                                   // Else LSB is not set
				crc >>= 1;                          // only perform right shift
			}
		}
	}
	//	swap the higher and lower byte to obtained the generated CRC
	crc = ((crc & 0x00FF) << 8) | ((crc & 0xFF00) >> 8);

	if( action== CRC_CHECK){

		actual_crc = (unsigned int)*(buf+len++)<<8; // High byte Received CRC
		actual_crc |= (unsigned int)*(buf+len);     // Low byte Received CRC

		// Check if Calc CRC matches Actual CRC
		if(crc == actual_crc){
			printf("CRC Check : Passed\n");
			return 1;
		}
		else{
			printf("CRC Check : Failed\n");
			return 0;
		}
	}
	else{
		return crc;                                 // if action == CRC_CALC , just return the calculated CRC.
	}
}

int main()
{
	int fd, cnt=0, recv_len=0, len=0,n=0;
	char buff[60];
	unsigned int recv_buf[60]={0};


	fd = open("COM3", O_RDONLY);

	if(fd < 0){
		perror("open() failed");
		_exit(1);
	}

char *token;


while (1)
{




  len = read(fd, &buff,sizeof(buff));
token = strtok(buff," ");
printf("%d\n ",len);

		int i =0;
		while(token !=NULL){
			//printf("%s\n",token);
			recv_buf[i++] = (int)strtol(token,NULL,16);
			token=strtok(NULL," ");
		}


		printf("%d\n",len/3);
for(int x=0;x<len/3; x++)
   printf("%x ",recv_buf[x]);

  printf("\n");

}
	close(fd);

	return 0;
}
