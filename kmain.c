
/* The C function */
    #define FB_GREEN     2
    #define FB_DARK_GREY 8
    #include "Drivers/framebuffer.h"
    
    void kmain()
    {

	fb_write_cell(0, 'A', FB_GREEN, FB_DARK_GREY);
	fb_move_cursor(1000);
        
        
    }
    
