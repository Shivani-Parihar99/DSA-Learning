struct Node *addToEmpty(struct Node *last, int data)
{
	// This function is only for empty list
	if (last != NULL)
	return last;

	// Creating a node dynamically.
	struct Node *temp =
		(struct Node*)malloc(sizeof(struct Node));

	// Assigning the data.
	temp -> data = data;
	last = temp;
	// Note : list was empty. We link single node
	// to itself.
	temp -> next = last;

	return last;
}
struct Node *addBegin(struct Node *last, int data)
{
if (last == NULL)
	return addToEmpty(last, data);

// Creating a node dynamically.
struct Node *temp
		= (struct Node *)malloc(sizeof(struct Node));

// Assigning the data.
temp -> data = data;

// Adjusting the links.
temp -> next = last -> next;
last -> next = temp;

return last;
}

struct Node *addEnd(struct Node *last, int data)
{
if (last == NULL)
	return addToEmpty(last, data);

// Creating a node dynamically.
struct Node *temp =
		(struct Node *)malloc(sizeof(struct Node));

// Assigning the data.
temp -> data = data;

// Adjusting the links.
temp -> next = last -> next;
last -> next = temp;
last = temp;

return last;
}

