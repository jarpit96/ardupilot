#include<AP_HAL.h>



class AP_Visca
{
	public:
		AP_Visca()
		{
			change_ozoom=change_dzoom=change_focus=change_shutter=change_iris=change_exposure=change_aperture=prev_ozoom=prev_dzoom=prev_focus=prev_shutter=prev_iris=prev_exposure=prev_aperture=0;
		}
		
		void set_focus(int16_t );
		void set_ozoom(int16_t );
		void set_dzoom(int16_t );
		void set_exposure(int16_t );
		void set_iris(int16_t );
		void set_aperture(int16_t );
		void set_shutter(int16_t );
		//int16_t ozoom,dzoom,shutter,exposure,focus,iris,aperture;
		private:
		int16_t prev_ozoom,prev_dzoom,prev_shutter,prev_exposure,prev_focus,prev_iris,prev_aperture;
		int16_t change_ozoom,change_dzoom,change_shutter,change_exposure,change_focus,change_iris,change_aperture;
	
};
