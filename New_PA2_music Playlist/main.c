#include "Header.h"


int main(void)
{
	 Node* Plist = NULL;	
	 load(&Plist);
	 main_menu(&Plist);
	 storeSong(&Plist);

	return 0;
}
