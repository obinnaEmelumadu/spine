
#include "spine_slot.h"

SpineSlot::SpineSlot() {
	this->spine = NULL;
	this->slot = NULL;
}

SpineSlot::~SpineSlot() {
	this->spine = NULL;
	this->slot = NULL;
}


void SpineSlot::_bind_methods() {
}

void SpineSlot::_notification(int p_what) {

	switch (p_what) {
		case NOTIFICATION_DRAW: {
			_draw();
		} break;
	}
}

void SpineSlot::_draw() {
	if (this->spine != NULL && this->slot != NULL) {
		this->spine->draw_slot(this);
	}
}
