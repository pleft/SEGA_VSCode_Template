#include <genesis.h>

int main()
{
	VDP_drawText("Hello Sega World!", 10, 13);

	while(1)
	{        
		VDP_waitVSync();
	}
	return (0);
}
