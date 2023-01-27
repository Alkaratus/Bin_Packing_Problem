#pragma once
#include "Element.h"
#include "Insertion.h"

typedef struct {
	unsigned id, size;
} Container;

Container create_container(unsigned id, unsigned size);
Insertion pack_element_into_container(Container* container, Element* element);

static unsigned substract_and_erase(unsigned* substracting, unsigned* substracted);