#pragma once

#include "spine.h"

class SpineSlot : public Node2D {
	GDCLASS(SpineSlot, Node2D);

	Spine *spine;

	void _draw();

protected:
	void _notification(int p_what);

	static void _bind_methods();

public:
	spSlot *slot;

	void init(Spine *spine, spSlot *slot) {
		this->spine = spine;
		this->slot = slot;
	}

	SpineSlot();
	virtual ~SpineSlot();
};
