#include "Container.h"

int main() {
	Container container = create_container(0, 100);
	Element element = create_element(0, 70);
	pack_element_into_container(&container, &element);
	if (container.size == 30 && element.size == 0) {
		return 0;
	}
	return -1;
}