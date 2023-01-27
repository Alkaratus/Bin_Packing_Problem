#pragma once

typedef struct {
	unsigned element_id, container_id, size;
} Insertion;

Insertion create_insertion(unsigned element_id, unsigned container_id, unsigned size);