
#include"AP_Visca.h"

extern const AP_HAL::HAL& hal;

void AP_Visca::		set_ozoom(int16_t ozoom)
	{
                 change_ozoom=ozoom-prev_ozoom;
		 prev_ozoom=ozoom;
		if(change_ozoom)
		{
	 	char cam_pre[5]={0x81,0x01,0x04,0x47,0xFF};

  		char cam_pos[36][4]={ {0x00, 0x00, 0x00, 0x00}, 

                        {0x01, 0x06, 0x06, 0x0F}, 

                        {0x01, 0x0F, 0x0F, 0x00}, 

                        {0x02, 0x05, 0x07, 0x0D}, 

                        {0x02, 0x09, 0x04, 0x00}, 

                        {0x02, 0x0C, 0x00, 0x02}, 

                        {0x02, 0x0E, 0x02, 0x0B}, 

                        {0x02, 0x0F, 0x0E, 0x0E}, 

                        {0x03, 0x01, 0x06, 0x0A}, 

                        {0x03, 0x02, 0x0B, 0x02}, 

                        {0x03, 0x03, 0x0D, 0x04}, 

                        {0x03, 0x04, 0x0D, 0x09}, 

                        {0x03, 0x05, 0x0C, 0x08}, 

                        {0x03, 0x06, 0x0A, 0x04}, 

                        {0x03, 0x07, 0x07, 0x03}, 

                        {0x03, 0x08, 0x03, 0x06}, 

                        {0x03, 0x08, 0x0F, 0x00}, 

                        {0x03, 0x09, 0x0A, 0x00}, 

                        {0x03, 0x0A, 0x04, 0x09}, 

                        {0x03, 0x0A, 0x0E, 0x08}, 

                        {0x03, 0x0B, 0x07, 0x0F}, 

                        {0x03, 0x0C, 0x00, 0x0C}, 

                        {0x03, 0x0C, 0x08, 0x0E}, 

                        {0x03, 0x0D, 0x00, 0x06}, 

                        {0x03, 0x0D, 0x07, 0x03}, 

                        {0x03, 0x0D, 0x0D, 0x04}, 

                        {0x03, 0x0E, 0x02, 0x0C}, 

                        {0x03, 0x0E, 0x07, 0x0C}, 

                        {0x03, 0x0E, 0x0C, 0x02}, 

                        {0x03, 0x0F, 0x00, 0x00}, 

                        {0x03, 0x0F, 0x03, 0x08}, 

                        {0x03, 0x0F, 0x06, 0x08}, 

                        {0x03, 0x0F, 0x09, 0x04}, 

                        {0x03, 0x0F, 0x0B, 0x0D}, 

                        {0x03, 0x0F, 0x0D, 0x0F}, 

                        {0x04, 0x00, 0x00, 0x00}}; 

               for(int i=0;i<4;i++){
				hal.uartE->write(cam_pre[i]);     
				}    

        

        		for(int j=0;j<4;j++){
				hal.uartE->write(cam_pos[ozoom-1][j]);
				}

                hal.uartE->write(cam_pre[4]);
		}
	}

void AP_Visca::		set_dzoom(int16_t dzoom)
{
		 change_dzoom=dzoom-prev_dzoom;
		 prev_dzoom=dzoom;
		if(change_dzoom)
		{

	char cam_pre[7]={0x81,0x01,0x04,0x46,0x00,0x00,0xFF};
	char cam_pos[12][2]={ {0x00, 0x00}, 

                        {0x08, 0x00}, 

                        {0x0A, 0x0A}, 

                        {0x0C, 0x00}, 

                        {0x0C, 0x0C}, 

                        {0x0D, 0x05}, 

                        {0x0D, 0x0B}, 

                        {0x0E, 0x00}, 

                        {0x0E, 0x03}, 

                        {0x0E, 0x06}, 
 
                        {0x0E, 0x08}, 

                        {0x0E, 0x0B}}; 

				for(int i=0;i<6;i++){
				hal.uartE->write(cam_pre[i]);     
				}    

        

        		for(int j=0;j<2;j++){
				hal.uartE->write(cam_pos[dzoom-1][j]);
				}

                hal.uartE->write(cam_pre[6]);
		}                        
}

void AP_Visca::		set_aperture(int16_t aperture)
{
	
	        change_aperture=aperture-prev_aperture;
		prev_aperture=aperture;
		if(change_aperture)	
	{
	char cam_pre[8]={0x81,0x01,0x04,0x42,0x00,0x00,0x00,0xFF};
	char cam_pos=0;
	switch(aperture)
		{
			case 0: cam_pos=0x00;
					break;
			case 1: cam_pos=0x01;
					break;
			case 2: cam_pos=0x02;
					break;
			case 3: cam_pos=0x03;
					break;
			case 4: cam_pos=0x04;
					break;
			case 5: cam_pos=0x05;
					break;
			case 6: cam_pos=0x06;
					break;
			case 7: cam_pos=0x07;
					break;
			case 8: cam_pos=0x08;
					break;
			case 9: cam_pos=0x09;
					break;
			case 10: cam_pos=0x0A;
					break;
			case 11: cam_pos=0x0B;
					break;
			case 12: cam_pos=0x0C;
					break;
			case 13: cam_pos=0x0D;
					break;
			case 14: cam_pos=0x0E;
					break;
			case 15: cam_pos=0x0F;
					break;
			

		}

	
				for(int i=0;i<7;i++){
				hal.uartE->write(cam_pre[i]);     
				}    

        			hal.uartE->write(cam_pos);
				

                		hal.uartE->write(cam_pre[7]);
                        
	}
}

void AP_Visca::		set_exposure(int16_t exposure)
{
	change_exposure=exposure-prev_exposure;
		prev_exposure=exposure;
		if(change_exposure)	
	{



	char cam_pre[5]={0x81,0x01,0x04,0x39,0xFF};
	char cam_pos=0;
	switch(exposure)
	{
	case 1: cam_pos=0x00;
		break;

	case 2: cam_pos=0x03;
		break;

	case 3: cam_pos=0x0A;
		break;

	case 4: cam_pos=0x0B;
		break;

	case 5: cam_pos=0x0D;
		break;

	}
				for(int i=0;i<4;i++){
				hal.uartE->write(cam_pre[i]);     
				}    

        			hal.uartE->write(cam_pos);
				

                		hal.uartE->write(cam_pre[4]);
	
	}
}

void AP_Visca::		set_shutter(int16_t shutter)
{
	change_shutter=shutter-prev_shutter;
		prev_shutter=shutter;
		if(change_shutter)	
	{




	char cam_pre[7]={0x81,0x01,0x04,0x4A,0x00,0x00,0xFF};
	char cam_pos[22][2]={{0x00,0x00},
			      {0x00,0x01},
			      {0x00,0x02},
			      {0x00,0x03},
			      {0x00,0x04},
			      {0x00,0x05},
			      {0x00,0x06},
			      {0x00,0x07},
			      {0x00,0x08},
			      {0x00,0x09},
			      {0x00,0x0A},
			      {0x00,0x0B},
			      {0x00,0x0C},
			      {0x00,0x0D},
			      {0x00,0x0E},
			      {0x00,0x0F},
			      {0x00,0x10},
			      {0x00,0x11},
			      {0x00,0x12},
			      {0x00,0x13},
			      {0x00,0x14},
			      {0x00,0x15}};

		 		for(int i=0;i<6;i++){
				hal.uartE->write(cam_pre[i]);     
				}    

        

        			for(int j=0;j<2;j++){
				hal.uartE->write(cam_pos[shutter][j]);
				}

                		hal.uartE->write(cam_pre[6]);
	}
	
}

void AP_Visca::		set_iris(int16_t iris)
{
	change_iris=iris-prev_iris;
		prev_iris=iris;
		if(change_iris)	
	{




	char cam_pre[7]={0x81,0x01,0x04,0x4B,0x00,0x00,0xFF};
	char cam_pos[18][2]={{0x00,0x00},
			      {0x00,0x01},
			      {0x00,0x02},
			      {0x00,0x03},
			      {0x00,0x04},
			      {0x00,0x05},
			      {0x00,0x06},
			      {0x00,0x07},
			      {0x00,0x08},
			      {0x00,0x09},
			      {0x00,0x0A},
			      {0x00,0x0B},
			      {0x00,0x0C},
			      {0x00,0x0D},
			      {0x00,0x0E},
			      {0x00,0x0F},
			      {0x00,0x10},
			      {0x00,0x11}};

				for(int i=0;i<6;i++){
				hal.uartE->write(cam_pre[i]);     
				}    

        

        			for(int j=0;j<2;j++){
				hal.uartE->write(cam_pos[iris][j]);
				}

                		hal.uartE->write(cam_pre[6]);

	}
}

void AP_Visca::		set_focus(int16_t focus)
{

		change_focus=focus-prev_focus;
		prev_focus=focus;
		if(change_iris)	
{
	if(focus==22 || focus==23)
	{
		char cam_pre[7]={0x81,0x01,0x04,0x38,0xFF};
		char cam_pos=0;
		if(focus==2)
		cam_pos=0x03;
		else if(focus==3)
		cam_pos=0x02;
		
				for(int i=0;i<4;i++){
				hal.uartE->write(cam_pre[i]);     
				}    

				hal.uartE->write(cam_pos);
                		hal.uartE->write(cam_pre[4]);
	
	}
	else
	{
	char cam_pre[7]={0x81,0x01,0x04,0x08,0xFF};
	char cam_pos=0;
	switch(focus)
	{
	 case 0: cam_pos=0x20;
		break;
	 case 1: cam_pos=0x21;
		break;
	 case 2: cam_pos=0x22;
		break;
	 case 3: cam_pos=0x23;
		break;
	 case 4: cam_pos=0x24;
		break;
	 case 5: cam_pos=0x25;
		break;
	 case 6: cam_pos=0x26;
		break;	
	 case 7: cam_pos=0x27;
		break;
	 case 8: cam_pos=0x30;
		break;
	 case 9: cam_pos=0x31;
		break;
	 case 10: cam_pos=0x32;
		break;
	 case 11: cam_pos=0x33;
		break;
	 case 12: cam_pos=0x34;
		break;
	 case 13: cam_pos=0x35;
		break;
	 case 14: cam_pos=0x36;
		break;	
	 case 15: cam_pos=0x37;
		break;
         }
				for(int i=0;i<4;i++){
				hal.uartE->write(cam_pre[i]);     
				}    

				hal.uartE->write(cam_pos);
                		hal.uartE->write(cam_pre[4]);
	}	
	}
}

