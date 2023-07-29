#include <stdint.h>
#include <stddef.h>

#include <cdefs.h>
#include <mkmi.h>

extern "C" uint32_t VendorID = 0xCAFEBABE;
extern "C" uint32_t ProductID = 0xE234C0DE;

extern "C" size_t OnInit() {
	return 0;
}

extern "C" size_t OnExit() {
	return 0;
}
