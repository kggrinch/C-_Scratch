#ifndef BST_H_
#define BST_H_

template <class T>
class BST
{
  public:
    BST();
    BST(BST& other);
    ~BST();

    bool insert(const T& obj);
    bool remove(const T& target, T& result);
    void delete_tree();
    
    T search(const T& target);
    int height() const;
    int count() const;



  private:
    struct Node
    {
      T* data;
      Node* right;
      Node* left;
    };
    Node* root_;
    int count_;


    // Private BST methods. This is used for recursion
    void delete_tree(Node* node);
    Node* insert(Node* node, const T& obj);
    Node* remove(Node* node, const T& target, T& result);
    Node* find_min(Node* node) const;
    int height(Node* node) const;
    int count(Node* node) const;
    void copy_tree(Node* source_node, Node*& target_node)

};

template <class T>
BST<T>::BST() : root_(nullptr)
{

}

template <class T>
BST<T>::BST(BST& other)
{

}

template <class T>
BST<T>::~BST()
{

}

template <class T>
bool BST<T>::insert(const T& obj)
{
  root_ = insert(root_, obj);
}
template <class T>
typename BST<T>::Node* BST<T>::insert(Node* node, const T& obj)
{
  // If tree is empty
  if(node == nullptr)
  {
    count++;
    Node* new_node = new Node;
    new_node->data = obj;
    new_node->right = nullptr;
    new_node->left = nullptr;
    return new_node;
  }
  
  // If object is less go left
  if(obj < *(node->data))
  {
    node->left = insert(node->left, obj);
  }
  // If object is greater go right
  else if(obj > *(node->data))
  {
    node->right = insert(node->right, obj);
  }
  return node;
}



template <class T>
bool BST<T>::remove(T target, T& result)
{
  root_ = remove(root_, target, result);
  if(root_ != nullptr)
  {
    count_--;
    return true;
  }
  return false;
}

template<class T>
typename BST<T>::Node* BST<T>::remove(Node* node, const T& target, T& result)
{
  if(node == nullptr)
  {
    throw std::runtime_error("Element not found");
  }

  if(*(node->data) == target)
  {

  }

}




template <class T>
void BST<T>::delete_tree()
{

}

template <class T>    
T BST<T>::search(T target)
{

}

template <class T>
int BST<T>::height()
{

}

template <class T>
int BST<T>::count()
{

}


#endif