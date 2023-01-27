#include "Insertion.h"

Insertion create_insertion(unsigned element_id, unsigned container_id, unsigned size){
	Insertion insertion;
	insertion.element_id = element_id;
	insertion.container_id = container_id;
	insertion.size = size;
	return insertion;
}
