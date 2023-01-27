#include "Container.h"

Container create_container(unsigned id, unsigned size) {
	Container container;
	container.id=id;
	container.size = size;
	return container;
}

Insertion pack_element_into_container(Container* container, Element* element){
	unsigned packed_size;
	packed_size = container->size>=element->size?
		substract_and_erase(&container->size, &element->size) : substract_and_erase(&element->size, &container->size);
	return create_insertion(element->id, container->id, packed_size);
}

static unsigned substract_and_erase(unsigned* substracting, unsigned* substracted){
	*substracting -= *substracted;
	unsigned result = *substracted;
	*substracted = 0;
	return result;
}
