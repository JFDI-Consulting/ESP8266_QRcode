#include "OLEDDisplay.h"

class QRcode
{
	private:
		OLEDDisplay *display;
		void render(int x, int y, int color);
		void screenwhite();

	public:
		QRcode(OLEDDisplay *display);

		void init();
		void debug();
		void create(String message);
};
