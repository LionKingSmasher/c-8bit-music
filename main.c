#include <math.h>
main(t, f, C, s){
	for(;;t++){
		f=~t>>8|0;
		C=t-2048;
		putchar(
			((t&t>>6)&(t*(t>>((t&65535)>>12))))+(t*(C>>7)&256)+(t*(C>>7&C>>8&C>>9&16)>>t/64)
		);
	}
}