#include <genesis.h>
#include <resources.h>

	//u16 ind = TILE_USER_INDEX;
	//int hscroll_offset = 0;
	//int hscroll_offset_fore = 0;

	Sprite* player;
	
int main()
{
	//PAL_setPalette(PAL0,bg1.palette->data,DMA);
	//VDP_drawImageEx(BG_B,&bg1,TILE_ATTR_FULL(PAL0,FALSE,FALSE,FALSE,ind),0,-2,FALSE,TRUE);
	//ind += bg1.tileset->numTile;
	//PAL_setPalette(PAL1,fg1.palette->data,DMA);
	//VDP_drawImageEx(BG_A,&fg1,TILE_ATTR_FULL(PAL1,FALSE,FALSE,FALSE,ind),0,-4,FALSE,TRUE);
	//ind += fg1.tileset->numTile;

	//VDP_setScrollingMode(HSCROLL_PLANE, VSCROLL_PLANE);

	SPR_init();
	PAL_setPalette(PAL2,our_sprite.palette->data,DMA);
	player = SPR_addSprite(&our_sprite,0,0,TILE_ATTR(PAL2,FALSE,FALSE,FALSE));

	while(1)
	{        
		//hscroll_offset -= 1;
		//VDP_setHorizontalScroll(BG_B,hscroll_offset);

		//hscroll_offset_fore -= 2;
		//VDP_setHorizontalScroll(BG_A,hscroll_offset_fore);
		SPR_update();

		SYS_doVBlankProcess();
	}
	return (0);
	
}
