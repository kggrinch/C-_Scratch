bool List::RemoveItem(Item target, Item& result)
{
	// Check if list is empty
	if(head == nullptr)
	{
		return false;
	}



// Check if item exists in list
Node* current = head;
while(current != nullptr && *(current->pItem) != target)
{
	current = current->next;
}
if(current == nullptr)
{
	return false;
}

// Check head
if(*(head->pItem) == target)
{
	result = *(head->pItem);
	Node* remove_node = head;
	head = head->next;
	if(head != nullptr)
	{
		head->prev = nullptr;
	}
	else
{
	tail = nullptr;
}
	
	delete remove_node->pItem;
	remove_node->pItem = nullptr;
	delete remove_node;
	remove_node = nullptr;
	return true;
}

// Check tail
if(*(tail->pItem) == target)
{
	result = *(tail->pItem);
	Node* remove_node = tail;
	tail = tail->prev;
	tail->next = nullptr;
	delete remove_node->pItem;
	remove_node->pItem = nullptr;
	delete remove_node;
	remove_node = nullptr;
return true;
}

// Check the rest 
result = *(current->pItem);
Node* remove_node = current;

current->prev->next = current->next;
current->next->prev = current->prev;

delete remove_node->pItem;
remove_node->pItem = nullptr;
delete remove_node;
remove_node = nullptr;
return true;
}
