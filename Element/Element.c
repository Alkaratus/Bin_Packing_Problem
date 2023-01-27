#include "Element.h"

Element create_element(unsigned id, unsigned size){
	Element element;
	element.id = id;
	element.size = size;
	return element;
}
