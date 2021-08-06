#include "common.h"

bool signTx_parseIncluded(uint8_t value)
{
	switch (value) {
	case ITEM_INCLUDED_YES:
		return true;

	case ITEM_INCLUDED_NO:
		return false;

	default:
		THROW(ERR_INVALID_DATA);
	}
}