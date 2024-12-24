#include<iostream>

bool insertNewItem(Item& it)
{

// Create new memory
Item* new_item = new Item;
*(new_item) = it;
Node* new_node = new Node;
new_node->pItem = new_item;
new_node->next = nullptr;
new_node->prev = nullptr;

// Check if empty
if(head_ == nullptr)
{
new_node->next = head_;
head_ = new_node;
tail_ = new_node;
return true;
}


// Check dup
Node* current = head_;
while(current != nullptr)
{
if(*(current->pItem) == *(new_node->pItem))
{
	delete new_node->pItem;
	new_node->pItem = nullptr;
	delete new_node;
	new_node = nullptr;
	return false;
}
current = current->next;
}

// Check head
if(*(new_node->pItem) < *(head_->pItem))
{
new_node->next = head_;
head_ = new_node;
return true;
}


// Check tail
if(*(new_node->data) > *(tail_->pItem))
{
tail_->next = new_node;
new_node->prev = tail_;
tail_ = new_node;
return true;
}

// Check the rest of the list
current = head_;
while(current != nullptr && *(current->pItem) < *(new_node->pItem))
{
current = current->next;
}
new_node->next = current;
current->prev->next = new_node;
new_node->prev = current->prev;
current->prev = new_node;
return true;
}
