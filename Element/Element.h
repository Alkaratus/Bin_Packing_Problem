#pragma once

typedef struct {
	unsigned id, size;
} Element;

Element create_element(unsigned id, unsigned size);